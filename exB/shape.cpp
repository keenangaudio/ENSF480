#include "Graphics.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

//TODO: make seperate files for shape.h
Shape::~Shape(){
  delete[] shapeName;
}

Shape::Shape(int x, int y, const char* _shapeName) : origin( Point(x,y) ) {
  shapeName = new char[(int)strlen(_shapeName)];
  strcpy(shapeName, _shapeName);
}

Shape::Shape(const Shape& source):
                        origin(source.origin),
                        shapeName(new char[strlen(source.shapeName)+1]) {

  if(shapeName == NULL){
    std::cerr << "Memory not available...";
    std::exit(1);
  }

  strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs){
  if(this==&rhs)
    return *this;
  delete[] shapeName;
  shapeName = new char[strlen(rhs.shapeName)+1];

  if(shapeName == NULL){
    std::cerr << "Memory not availible...";
    std::exit(1);
  }
  strcpy(shapeName, rhs.shapeName);
  origin = rhs.origin;
  return *this;
}

const Point& Shape::getOrigin(){
  return origin;
}

const char* Shape::getName(){
  return shapeName;
}

void Shape::display(){
  printf("Shape Name: %s\n", shapeName);
  origin.display();
}

double Shape::distance (Shape& other){
  // if (!other) {
  //   std::cerr << "Error in distance, null input.\n";
  //   exit(-1);
  // }
  float dx = other.getOrigin().x - origin.x;
  float dy = other.getOrigin().y - origin.y;
  return sqrt( pow(dx,2) + pow(dy,2) );
}
double Shape::distance(Shape& the_shape, Shape& other){
  // if ( !(the_shape && other) ) {
  //   std::cerr << "Error in distance, null input.\n";
  //   exit(-1);
  // }
  float dx = other.getOrigin().x - the_shape.getOrigin().x;
  float dy = other.getOrigin().y - the_shape.getOrigin().y;
  return sqrt( pow(dx,2) + pow(dy,2) );
}
float Shape::area(){};
float Shape::perimeter(){};
void Shape::move(double dx, double dy){
  origin.x += dx;
  origin.y += dy;
}
