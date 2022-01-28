#include <iostream>
using namespace std;
struct Point{
 int x;
 int y;
};
void PrintPoints(Point point){
  cout<< "Point is = "<< point.x<<endl;
  
}
int main() {
  Point x = {2};
  Point y = {5};
  PrintPoints(x);
   PrintPoints(y);
}
