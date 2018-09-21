class Shape {
private:
  Point origin;
  char* shapeName;
public:
  Shape(const Shape& source);
  ~Shape();
  const Point& getOrigin();
  const char& getName();
  void display();
  double distance (Shape& other);
  static double distance(Shape& the_shape, Shape& other);
  void move(double dx, double dy);

}

class Rectangle {

}

class Square {

}

class GraphicsWorld {
private:
  float x;
  float y;
  static int count = 0;
  int id;
}
