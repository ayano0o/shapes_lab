#include <iostream>
#include <cassert>
#include <cmath>
#include <sstream>
#include <iomanip>
#include "allshapes.cpp"

using namespace std;

int main() {

    circle c(5);
    assert(abs(c.getArea() - (M_PI * 25.0)) < 1e-9); 
    assert(abs(c.getPerimeter() - (2 * M_PI * 5)) < 1e-9);  
    cout << printAreaToScreen(&c) << endl;

    rectangle r(4, 6);
    assert(r.getArea() == 24);  
    assert(r.getPerimeter() == 20);  
    cout << printAreaToScreen(&r) << endl;

    square s(5);
    assert(s.getArea() == 25); 
    assert(s.getPerimeter() == 20);  
    cout << printAreaToScreen(&s) << endl;

    
    rightTriangle rt(3, 4);
    assert(rt.getArea() == 6); 
    assert(abs(rt.getPerimeter() - (3 + 4 + 5)) < 1e-9);  
     cout << printAreaToScreen(&rt) << endl;

  
    isoscelesRightTriangle it(5);
    
    assert(abs(it.getArea() - 12.5) < 1e-9);
    assert(abs(it.getPerimeter() - (5 + 5 + sqrt(2)*5)) < 1e-9); 
    cout << printAreaToScreen(&it) << endl;

    cout << "All tests passed!" << endl;

    return 0;
}

