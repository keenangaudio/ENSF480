
#ifndef GRAPHICSBOI
  #define GRAPHICSBOI
  #include "point.h"

  class Shape {
    private:
    public:
      Point origin;
      char* shapeName;
      Shape(const Shape& source);
      ~Shape();
      Shape& operator=(const Shape& rhs);
      const Point& getOrigin();
      const char& getName();
      void display();
      double distance (Shape& other);
      static double distance(Shape& the_shape, Shape& other);
      void move(double dx, double dy);
      //;
  };

  class Square : public Shape {
    private:
      float side_a;
    public:
      Square(float side, const Shape& rhs);
      float area(void);
      float perimeter(void);
      float getSideA(void);
      void setSideA(float newSide);
      void display(void);
  };

  class Rectangle : public Square {
    private:
      float side_b;
    public:
      float area(void);
      float perimeter(void);
      float getSideB(void);
      void setSideB(void);
      void display(void);
  };

class GraphicsWorld {
  public:
    float x;
    float y;
    static int count;
    int id;
};
#endif
