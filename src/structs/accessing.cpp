#include <cmath>
#include <iostream>

using namespace std;

struct Vector2D {
  int x;
  int y;
};
double length(Vector2D vector);

int main (int argc, char *argv[]) {
  Vector2D v = { -8, 16 };
  cout << "Vector with x = " << to_string(v.x) << ", y = " << to_string(v.y) << " has a length of " << length(v) << endl;
  return 0;
}

double length(Vector2D vector) {
  return abs(sqrt(pow(vector.x, 2) + pow(vector.y, 2)));
}
