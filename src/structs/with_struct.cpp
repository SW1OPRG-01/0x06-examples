#include <iostream>
#include "length.h"

using namespace std;

double length(Point vector);

int main (int argc, char *argv[]) {
  Point point;
  point.x = -2;
  point.y = -4;

  Point another_point = { -2, -4 };

  cout << length(point) << " " << length(another_point) << endl;
  return 0;
}


