
#ifndef GRAPHICSBOI
  #define GRAPHICSBOI
  #include "point.h"
//TODO: make stuff private if we have to
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

  class Square : virtual public Shape {
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

  class Circle : virtual public Shape {
    private:
    public:
      float radius;
      Circle(float x, float y, float rad, const char* name);
      float area(void);
      float perimeter(void);
      float getRadius(void);
      void setRadius(float newRadius);
      void display(void);
  };

  class Rectangle : virtual public Square {
    private:
    public:
      float side_b;
      Rectangle(float x, float y, float sideA, float sideB, const char* name);
      Rectangle(const Rectangle& source);
      float area(void);
      float perimeter(void);
      float getSideB(void) const;
      void setSideB(float newSide);
      void display(void);
  };

  class CurveCut : public Circle, public Rectangle {
    private:
    public:
      CurveCut(float x, float y, float sideA, float sideB, float rad,  const char* name);
      float area(void);
      float perimeter(void);
      void display(void);
  };

class GraphicsWorld {
  public:
    static void run(void);
};
#endif
