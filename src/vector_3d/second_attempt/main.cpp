#include <iostream>
#include "vector3d.h"

using namespace std;

int main(int argc, char *argv[]) {
  Vector3D point = { -2, -5, 3 };
  double value = point.length();
  cout << point.length() << endl;
  
  return 0;
}