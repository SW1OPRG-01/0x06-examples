#include <cmath>
#include "vector3d.h"

using namespace std;

double Vector3D::length() {
  double result = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
  return abs(result);
}