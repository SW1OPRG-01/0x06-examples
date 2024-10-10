#include <cmath>
#include "vector3d.h"

using namespace std;

double Vector3D::length() {
  double result = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
  return abs(result);
}

Vector3D add(Vector3D v1, Vector3D v2) {
  return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}