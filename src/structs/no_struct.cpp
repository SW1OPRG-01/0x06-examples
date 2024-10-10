#include <cmath>
#include <iostream>

using namespace std;

double length(int x, int y);

int main (int argc, char *argv[]) {
  int vector_x = -2;
  int vector_y = -5;
  cout << length(vector_x, vector_y) << endl;
  return 0;
}

double length(int x, int y) {
  return abs(sqrt(pow(x, 2) + pow(y, 2)));
}