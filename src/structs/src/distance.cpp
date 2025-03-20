#include "distance.h"
#include <cmath>

double distance(Point point, Point destination) {
  return sqrt(pow(point.x - destination.x, 2) + pow(point.y - destination.y, 2));
}

double distance(int point_x, int point_y, int destination_x, int destination_y) {
  return sqrt(pow(point_x - destination_x, 2) + pow(point_y - destination_y, 2));
}