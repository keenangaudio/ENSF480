
#ifndef GRAPHICSBOI
  #define GRAPHICSBOI
  #include "point.h"

  class Shape {
    private:
    public:
      Point origin;
      char* shapeName;
      Shape(const Shape& source);

      Shape(int x, int y, const char* _shapeName);
      ~Shape();
      Shape& operator=(const Shape& rhs);
      const Point& getOrigin();
      const char* getName();
      void display();
      double distance (Shape& other);
      static double distance(Shape& the_shape, Shape& other);
      void move(double dx, double dy);

      //;
  };

  class Square : public Shape {
    private:
    public:
      float side_a;
      Square(float x, float y, float side, const char* name);
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
      void setSideB(float newSide);
      void display(void);
  };

class GraphicsWorld {
  public:
    static void run(void);
};
#endif
