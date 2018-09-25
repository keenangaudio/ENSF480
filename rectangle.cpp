
#include "graphics.h"


float Rectangle::area(void) {
  return side_a * side_b;
}
float Rectangle::perimeter(void) {
  return 2 * side_a + 2 * side_b;
}
float Rectangle::getSideB(void) {
  return side_b;
}
void Rectangle::setSideB(float newSide) {
  side_b = newSide;
}
void Rectangle::display(void) {
  printf("Rectangle Name: %s\n", &shapeName);
  origin.display();
  printf("Side a: %d\n", side_a);
  printf("Side b: %d\n", side_b);
  printf("Area: %d\n", this.area());
  printf("Perimeter: %d\n", this.perimeter());
}
