#include "Graphics.h"
#include <math.h>
#include <iostream>

using namespace std;

Circle::Circle(float x, float y, float rad, const char* name) : Shape(x, y, name) {
  //init shape and origin
  radius = rad;
}

float Circle::area(void){
  return M_PI * radius * radius;
}
float Circle::perimeter(void){
  return 2 * M_PI * radius;
}
float Circle::getRadius(void){
  return radius;
}
void Circle::setRadius(float newRadius){
  radius = newRadius;
}
void Circle::display(void){
  printf("Circle Name: %s\n", shapeName);
  origin.display();
  printf("Radius: %f\n", radius);
  printf("Area: %f\n", this->area());
  printf("Perimeter: %f\n", this->perimeter());
}
