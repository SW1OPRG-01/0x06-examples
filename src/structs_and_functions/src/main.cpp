#include <iostream>
#include "point_3d.h"

using namespace std;

int main(int argc, char *argv[]) {
  
  Point3D v1 = { -2, -5, 3 };
  Point3D v2 = { 5, 10, 15 };
  Point3D v3 = add(v1, v2);
  
  v3.print();
  
  return 0;
}