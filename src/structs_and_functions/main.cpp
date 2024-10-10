#include <iostream>
#include "vector3d.h"

using namespace std;

int main(int argc, char *argv[]) {
  Vector3D v1 = { -2, -5, 3 };
  Vector3D v2 = { 5, 10, 15 };
  Vector3D v3 = add(v1, v2);
  v3.print();
  
  return 0;
}