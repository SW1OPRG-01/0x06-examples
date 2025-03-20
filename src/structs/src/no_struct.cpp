#include <iostream>
#include "distance.h"

using namespace std;

int main (int argc, char *argv[]) {
  int point_x = -2;
  int point_y = -5;
  cout << distance(point_x, point_y, 2, 2) << endl;
  return 0;
}

