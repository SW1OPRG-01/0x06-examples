#include <cmath>
#include <iostream>

using namespace std;

struct Vector2D {
  int x;
  int y;
};
double length(Vector2D vector);

int main (int argc, char *argv[]) {
  cout << length({ -2,-5 }) << endl;
  return 0;
}

double length(Vector2D vector) {
  return abs(sqrt(pow(vector.x, 2) + pow(vector.y, 2)));
}
