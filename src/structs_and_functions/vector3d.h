#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>

using namespace std;

struct Vector3D {
  int x;
  int y;
  int z;

  double length();

  void print() {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
  }
};

Vector3D add(Vector3D v1, Vector3D v2);

#endif