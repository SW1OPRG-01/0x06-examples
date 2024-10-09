#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <cmath>

using namespace std;

struct Vector3D {
  int x;
  int y;
  int z;

  double length() {
    double result = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    return abs(result);
  }
};

#endif