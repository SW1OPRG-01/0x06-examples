#ifndef POINT_3D_H
#define POINT_3D_H

#include <iostream>

struct Point3D {
  int x;
  int y;
  int z;

  double length();

  void print() {
  std::cout << "(" << x << ", " << y << ", " << z << ")" << endl;
  }
};

Point3D add(Point3D v1, Point3D v2);

#endif