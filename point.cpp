class Point {
private:
  float x, y, z;
  int id;
  static int count = 1000;
public:
  Point(float x, float y, float z);

  display();
  counter();
  distance(Point b);
  static distance(Point a, Point b);
}
