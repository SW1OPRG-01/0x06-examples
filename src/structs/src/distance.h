#ifndef DISTANCE_H
#define DISTANCE_H

struct Point {
  int x;
  int y;
};

double distance(Point, Point);
double distance(int, int, int, int);

#endif