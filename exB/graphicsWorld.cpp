#include "Graphics.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void GraphicsWorld::run(){
/****************************ASSUME CODE SEGMENT FOR EXERCISE A IS HERE ************************/
#if 1
  cout << "\nTesting Functions in class Circle:" <<endl;
  Circle c (3, 5, 9, "CIRCLE C");
  c.display();
  cout << "the area of " << c.getName() <<" is: "<< c.area() << endl;
  cout << "the perimeter of " << c.getName() << " is: "<< c.perimeter() << endl;
  d = a.distance(c);
  cout << "\nThe distance between rectangle a and circle c is: " <<d;
  CurveCut rc (6, 5, 10, 12, 9, "CurveCut rc");
  rc.display();
  cout << "the area of " << rc.getName() <<" is: "<< rc.area();
  cout << "the perimeter of " << rc.getName() << " is: "<< rc.perimeter(); d = rc.distance(c);
  cout << "\nThe distance between rc and c is: " <<d;
  // Using array of Shape pointers:
  Shape* sh[4];
  sh[0] = &s;
  sh[1] = &a;
  sh [2] = &c;
  sh [3] = &rc;
  sh [0]->display();
  cout << "\nthe area of "<< sh[0]->getName() << "is: "<< sh[0] ->area();
  cout << "\nthe perimeter of " << sh[0]->getName () << " is: "<< sh[0]->perimeter(); sh [1]->display();
  cout << "\nthe area of "<< sh[1]->getName() << "is: "<< sh[1] ->area();
  cout << "\nthe perimeter of " << sh[0]->getName () << " is: "<< sh[1]->perimeter();
  sh [2]->display();
  cout << "\nthe area of "<< sh[2]->getName() << "is: "<< sh[2] ->area();
  cout << "\nthe circumference of " << sh[2]->getName ()<< " is: "<< sh[2]->perimeter(); sh [3]->display();
  cout << "\nthe area of "<< sh[3]->getName() << "is: "<< sh[3] ->area();
  cout << "\nthe perimeter of " << sh[3]->getName () << " is: "<< sh[3]->perimeter();
  cout << "\nTesting copy constructor in class CurveCut:" <<endl; CurveCut cc = rc;
  cc.display();
  cout << "\nTesting assignment operator in class CurveCut:" <<endl; CurveCut cc2(2, 5, 100, 12, 9, "CurveCut cc2");
  cc2.display();
  cc2 = cc;
  cc2.display();
#endif
}
