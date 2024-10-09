#include <iostream>
#include "vector3d.h"

using namespace std;

int main(int argc, char *argv[]) {
  Vector3D point = { -2, -4, 8 };
  double value = length(point);
  cout << value << endl;
  
  return 0;
}