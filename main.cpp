#include <iostream>
#include <cassert>
#include <cmath>
#include "allshapes.cpp"

using namespace std;

int main() {
  
  circle c(10);
  assert(c.getArea() == 50);
  assert(c.getPerimeter() == 50 );
  
  rectangle r(5,10);
  assert(r.getArea() == 50);
  assert(r.getPerimeter()== 30);

  rightTriangle r(10,20);
  assert(r.getArea() == 50);
  assert(r.getPerimeter() == 30);

   cout << "Your tests succeeded!" << endl;
   cout << "All tests passed!" << endl;

     return 0;
}

