
#ifndef POINTTTTTTTYBOI
  #define POINTTTTTTTYBOI

  class Point {
    public:
      float x, y;
      int id;
      static int count;
      Point(float x, float y);
      void display(void);
      int counter(void);
      float distance(Point *b);
      static float distance(Point *a, Point *b);
};
#endif
