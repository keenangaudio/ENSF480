#include "Graphics.h"
#include <iostream>

using namespace std;

Square::Square(float side, const Shape& source): Shape(source){
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
