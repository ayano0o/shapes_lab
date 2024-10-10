#include <iostream>
#include <cassert>
#include <cmath>
#include "allshapes.cpp"

using namespace std;

int main() {
  
  circle c(10);
  assert(c.getArea() == 314.16);
  assert(c.getPerimeter() == 62.83);

  rectangle r(5,10);
  assert(r.getArea() == 50);
  assert(r.getPerimeter()== 30);

  rightTriangle t(10,20);
  assert(t.getArea() == 100);
  assert(t.getPerimeter() == 52.36);

   cout << "Your tests succeeded!" << endl;
   cout << "All tests passed!" << endl;

     return 0;
}

