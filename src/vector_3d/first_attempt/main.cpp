#include <iostream>
#include "vector3d.h"

using namespace std;

int main(int argc, char *argv[]) {
  // Initialization - Option 1
  Vector3D point_1;
  point_1.x = -2;
  point_1.y = -4;
  point_1.z = 8;
  
  // Initialization - Option 2
  Vector3D point_2 = { -2, -4, 8 };
  
  double length_point_1 = length(point_1);
  cout << length_point_1 << " " << length(point_2) << endl;

  return 0;
}