#include <iostream>
#include <cmath>
#include "circle.hpp"

using namespace std;

circle :: circle(int area)
{
  this->area = area;
}

circle :: circle(int perimeter)
{
  this->perimeter = perimeter;
}

int circle :: getArea()
{
    return area * M_PI * pow(radius, 2.0);
};

int circle :: getPerimeter()
{
    return perimeter * 2 * M_PI * radius;
};
