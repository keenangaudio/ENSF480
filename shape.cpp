#include "Graphics.h"
#include <string.h>
#include <stdio.h>
#include <iostream>

//TODO: make seperate files for shape.h
class Shape{
  ~Shape(){
    delete[] shapeName;
  }

  Shape(const Shape& source):
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

  const Point& getOrigin(){
    return &origin;
  }

  const char& getName(){
    return &shapeName;
  }

  void display(){
    printf("Shape Name: %s\n", &shapeName);
    origin.display();
  }

  double distance (Shape& other){
    if (!other) {
      std::cerr << "Error in distance, null input.\n";
      exit(-1);
    }
    float dx = other.getOrigin().x - origin.x;
    float dy = other.getOrigin().y - origin.y;
    return sqrt( pow(dx,2) + pow(dy,2) );
  }
  static double distance(Shape& the_shape, Shape& other){
    if ( !(the_shape && other) ) {
      std::cerr << "Error in distance, null input.\n";
      exit(-1);
    }
    float dx = other.getOrigin().x - the_shape.getOrigin().x;
    float dy = other.getOrigin().y - the_shape.getOrigin().y;
    return sqrt( pow(dx,2) + pow(dy,2) );
  }
  void move(double dx, double dy){
    origin.x += dx;
    origin.y += dy;
  }
}
