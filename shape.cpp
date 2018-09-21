#include "graphics.h"

//TODO: make seperate files for shape.h
class Shape{
  ~Shape(){
    delete[] shapeName;
  }

  Shape(const Shape& source):
                          origin(source.origin),
                          shapeName(new char[strlen(source.shapeName)+1]){

    if(shapeName == NULL){
      cerr << "Memory not available...";
      exit(1);
    }
    int a;
    int b;


    strcpy(shapeName, source.shapeName);
  }

  Shape& operator=(const Shape& rhs){
    if(this==&rhs)
      return *this;
    delete[] shapeName;
    shapeName = new char[strlen(rhs.shapeName)+1];

    if(shapeName == NULL){
      cerr << "Memory not availible...";
      exit(1);
    }
    strcpy(shapeName, rhs.shapeName);
    origin = rhs.origin;
    return *this;
  }
}
