#include "shape.hpp"

class circle : public shape {

private:
   int area;
   int perimeter;

public:
   explicit circle(int area);
   explicit circle(int perimeter);
   int getArea() override;
   int getPerimeter() override;

};


