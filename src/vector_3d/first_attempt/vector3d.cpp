#include <cmath>
#include "vector3d.h"

using namespace std;

double length(Vector3D vector) {
  double result = sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
  return abs(result);
}