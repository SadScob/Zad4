#include <iostream>
using namespace std;
struct Point{
 int x;
 int y;
};

struct Circle{
Point point;
double r;
};

int main() {
  Circle circle;
  circle.point.x = 2;
  circle.point.y = 5;
  circle.r = 10;
}
