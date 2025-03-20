#include <iostream>
#include "length.h"

using namespace std;

double length(int x, int y);

int main (int argc, char *argv[]) {
  int point_x = -2;
  int point_y = -5;
  cout << length(point_x, point_y) << endl;
  return 0;
}

