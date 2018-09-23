
#include "point.h"
#include <stdio.h>
#include <iostream>
#include <math.h>

int Point::count = 1000;

Point::Point(float x_, float y_, float z_): id( (++count) ){
  x = x_;
  y = y_;
  z = z_;
}

void Point::display(void) {
  printf("X-COORDINATE: %6.2f\nY-COORDINATE: %6.2f\n", x, y);
}

int Point::counter(void) {
  return count - 1000;
}
float Point::distance(Point *b) {
  return distance(this, b);
}

float Point::distance(Point *a, Point *b) {
  if ( !(a && b) ) {
    std::cerr << "Error in distance, null input.\n";
    exit(-1);
  }
  float dx = b->x - a->x;
  float dy = b->y - a->y;
  return sqrt( pow(dx,2) + pow(dy,2) );
}
