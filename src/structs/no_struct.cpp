#include <cmath>
#include <iostream>

using namespace std;

double length(int x, int y);

int main (int argc, char *argv[]) {
  cout << length(-2,-5) << endl;
  return 0;
}

double length(int x, int y) {
  return abs(sqrt(pow(x, 2) + pow(y, 2)));
}