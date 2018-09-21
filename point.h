
#ifndef POINTTTTTTTYBOI
  #define POINTTTTTTTYBOI
  class Point {
  private:
    float x, y, z;
    int id;
    static int count;
  public:
    Point(float x, float y, float z);

    void display(void);
    void counter(void);
    float distance(Point b);
    static float distance(Point a, Point b);
  };
#endif
