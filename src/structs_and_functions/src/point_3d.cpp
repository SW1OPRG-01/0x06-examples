#include <cmath>
#include "point_3d.h"

using namespace std;

void Point3D::add(int x, int y, int z) {
  this->x += x;
  this->y += y;
  this->z += z;
}

Point3D add(Point3D v1, Point3D v2) {
  return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}