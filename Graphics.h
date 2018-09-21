#include "point.h"
class Shape {
private:
  Point origin;
  char* shapeName;
public:
  Shape(const Shape& source);
  ~Shape();
  Shape::operator=(const Shape& rhs);
  const Point& getOrigin();
  const char& getName();
  void display();
  double distance (Shape& other);
  static double distance(Shape& the_shape, Shape& other);
  void move(double dx, double dy);

};

class Rectangle {
private:
  float side_b;
public:
  float area(void);
  float perimeter(void);
  float getSideB(void);
  void setSideB(void);
  void display(void);
};

class Square {
private:
  float side_a;
public:
  float area(void);
  float perimeter(void);
  float getSideA(void);
  void setSideA(void);
  void display(void);
};

class GraphicsWorld {
private:
  float x;
  float y;
  static int count;
  int id;
};
