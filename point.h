class Point {
private:
  float x, y, z;
  int id;
  static int count = 1000;
public:
  Point(float x, float y, float z);

  void display(void);
  void counter(void);
  float distance(Point b);
  static float distance(Point a, Point b);
}
