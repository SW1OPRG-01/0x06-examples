#ifndef POINT_3D_H
#define POINT_3D_H

#include <iostream>

struct Point3D {
  int x;
  int y;
  int z;

  void add(int x, int y, int z);

  void print() {
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
  }
};

Point3D add(Point3D v1, Point3D v2);

#endif