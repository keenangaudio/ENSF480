
#include "point.h"
#include <stdio.h>
#include <iostream>
#include <math.h>

int Point::count = 1000;

Point::Point(float x_, float y_): id( (++count) ){
  x = x_;
  y = y_;
}

void Point::display(void) {
  printf("X-coordinate: %6.2f\nY-coordinate: %6.2f\n", x, y);
}

int Point::counter(void) {
  return count - 1000;
}

float Point::distance(Point& a, Point& b) {
  // if ( !(a!=NULL && b!=NULL) ) {                       // TODO: Fix this 
  //   std::cerr << "Error in distance, null input.\n";
  //   exit(-1);
  // }
  float dx = b.x - a.x;
  float dy = b.y - a.y;
  return sqrt( pow(dx,2) + pow(dy,2) );
}
float Point::distance(Point& b) {
  return Point::distance(*this, b);
}

void Point::setx(float newX){
  x = newX;
}
void Point::sety(float newY){
  y = newY;
}
