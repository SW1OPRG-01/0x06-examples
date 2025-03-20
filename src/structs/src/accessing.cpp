#include <iostream>
#include "distance.h"

using namespace std;

int main (int argc, char *argv[]) {
  
  Point p1 = { -8, 16 };
  Point p2 = { 8, -16 };
  
  cout << "Point p1 with x = " << to_string(p1.x) << ", y = " << to_string(p1.y) << endl; 
  cout << "Point p2 with x = " << to_string(p2.x) << ", y = " << to_string(p2.y) << endl;

  return 0;
}
