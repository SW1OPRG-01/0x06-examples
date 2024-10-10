#include <cmath>
#include <iostream>

using namespace std;

struct Vector2D {
  int x;
  int y;
};
double length(Vector2D vector);

int main (int argc, char *argv[]) {
  Vector2D v1;
  v1.x = -2;
  v1.y = -4;

  Vector2D v2 = { -2, -4 };

  cout << length(v1) << " " << length(v2) << endl;
  return 0;
}

double length(Vector2D vector) {
  return abs(sqrt(pow(vector.x, 2) + pow(vector.y, 2)));
}
