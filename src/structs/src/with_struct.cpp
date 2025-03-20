#include <iostream>
#include "distance.h"

using namespace std;

int main (int argc, char *argv[]) {
  Point point;
  point.x = -2;
  point.y = -4;

  Point another_point = { -2, -4 };
  Point destination = { 4, 4 };

  cout << distance(point, destination) << " " 
       << distance(another_point, destination) << endl;

  return 0;
}


