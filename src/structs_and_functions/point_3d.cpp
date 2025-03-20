#include <cmath>
#include "point_3d.h"

using namespace std;

double Point3D::length() {
  double result = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
  return abs(result);
}

Point3D add(Point3D v1, Point3D v2) {
  return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}