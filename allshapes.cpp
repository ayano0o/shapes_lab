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




rectangle :: rectangle(int length, int width)
{
  this->length = length;
  this->width = width;
}

int rectangle :: getArea()
{
    return length * width;
};

int rectangle :: getPerimeter()
{
    return 2*(length+width);
};




rightTriangle :: rightTriangle(int leg1, int leg2)
{
  this->leg1 = leg1;
  this->leg2 = leg2;
}

int rightTriangle :: getArea()
{
    return (leg1*leg2)/2;
};

int rightTriangle :: getPerimeter()
{
    return leg1+leg2+(sqrt(pow(leg1, 2.0)+pow(leg2, 2.0)));
};

