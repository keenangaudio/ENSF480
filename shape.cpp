#include "graphics.h"

Shape::~Shape(){
  delete[] shapeName;
}

Shape::Shape(const Shape& source):
                        origin(source.origin),
                        shapeName(new char[strlen(source.shapeName)+1]){

}
