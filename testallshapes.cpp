#include <iostream>
#include <cassert>
#include "allshapes.hpp"

using namespace std;


int main() {

 circle radius = circle('25');

 circle perimeter = circle('50');

  cout << "Starting tests..." << endl;

  assert(radius.getArea() == '   ');
  assert(radius.getPerimeter() == '    ');

  cout << "Your tests succeeded!" << endl;

}
