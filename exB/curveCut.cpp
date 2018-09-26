#include "Graphics.h"
#include <math.h>
#include <iostream>

using namespace std;

CurveCut::CurveCut(float x, float y, float sideA, float sideB, float rad,  const char* name)
  : Rectangle(x, y, sideA, sideB, name)
  , Circle(x, y, rad, name){
    // Hmmmmmm
    if(radius > sideA || radius > sideB){
      std::cerr<<"Error, radius of curvecut larger than side lengths\n";
      exit(1);
    }
}

float CurveCut::area(void){
  return Rectangle::area() - Circle::area();
}
float CurveCut::perimeter(void){
  return 2 * (side_a - 2 * radius)
        + 2 * (side_b - 2 * radius)
        + Circle::perimeter();
}
void CurveCut::display(void){
  printf("CurveCut Name: %s\n", shapeName);
  origin.display();
  printf("Width: %f\n", side_a);
  printf("Height: %f\n", side_b);
  printf("Radius: %f\n", radius);
  printf("Area: %f\n", area());
  printf("Perimeter: %f\n", perimeter());
}
