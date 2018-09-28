
#include "Graphics.h"
#include <iostream>

Rectangle::Rectangle(float x, float y, float sideA, float sideB, const char* name)
  : Square(x, y, sideA, name)
  , Shape(x, y, name) {
  side_b = sideB;
}
Rectangle::Rectangle(const Rectangle& source)
  : Square(source.origin.x, source.origin.y, source.side_a, source.shapeName)
  , Shape(source.origin.x, source.origin.y, source.shapeName){
  side_b = source.getSideB();
}
Rectangle::~Rectangle(){}
float Rectangle::area(void) {
  return side_a * side_b;
}
float Rectangle::perimeter(void) {
  return 2 * side_a + 2 * side_b;
}
float Rectangle::getSideB(void) const{
  return side_b;
}
void Rectangle::setSideB(float newSide) {
  side_b = newSide;
}
void Rectangle::display(void) {
  printf("Rectangle Name: %s\n", shapeName);
  origin.display();
  printf("Side a: %f\n", side_a);
  printf("Side b: %f\n", side_b);
  printf("Area: %f\n", area());
  printf("Perimeter: %f\n", perimeter());
}
