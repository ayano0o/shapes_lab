#include <iostream>
#include <cmath>
#include "allshapes.hpp"

using namespace std;

circle :: circle(int radius)
{
  this->radius = radius;
}

int circle :: getArea()
{
    return M_PI * pow(radius, 2.0);
};

int circle :: getPerimeter()
{
    return 2 * M_PI * radius;
};




rectangle :: rectangle(int area)
{
  this->area = area;
}

rectangle :: rectangle(int perimeter)
{
  this->perimeter = perimeter;
}

int rectangle :: getArea()
{
    return length * width;
};

int rectangle :: getPerimeter()
{
    return 2*(length+width);
};




rightTriangle :: rightTriangle(int area)
{
  this->area = area;
}

rightTriangle :: rightTriangle(int perimeter)
{
  this->perimeter = perimeter;
}

int rightTriangle :: getArea()
{
    return (leg1*leg2)/2;
};

int rightTriangle :: getPerimeter()
{
    return leg1+leg2+(sqrt(pow(leg1, 2.0)+pow(leg2, 2.0)));
};

