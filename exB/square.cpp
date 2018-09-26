#include "Graphics.h"
#include <iostream>

using namespace std;

Square::Square(float x, float y, float side, const char* name) : Shape(x, y, name) {
  //init shape and origin
  side_a = side;
}

float Square::area(void){
  return side_a * side_a;
}
float Square::perimeter(void){
  return 4 * side_a;
}
float Square::getSideA(void){
  return side_a;
}
void Square::setSideA(float newSide){
  side_a = newSide;
}
void Square::display(void){
  printf("Square Name: %s\n", shapeName);
  origin.display();
  printf("Side a: %f\n", side_a);
  printf("Area: %f\n", this->area());
  printf("Perimeter: %f\n", this->perimeter());
}
