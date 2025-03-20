#include "length.h"
#include <cmath>

double length(Point point) {
  return abs(sqrt(pow(point.x, 2) + pow(point.y, 2)));
}

double length(int x, int y) {
  return abs(sqrt(pow(x, 2) + pow(y, 2)));
}