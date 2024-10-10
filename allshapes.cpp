#include <iostream>
#include <cmath>
#include "allshapes.hpp"

using namespace std;

circle :: circle(double radius)
{
  this->radius = radius;
}

double circle :: getArea()
{
    return M_PI * pow(this->radius, 2.0);
};

double circle :: getPerimeter()
{
    return 2 * M_PI * this->radius;
};




rectangle :: rectangle(double length, double width)
{
  this->length = length;
  this->width = width;
}

double rectangle :: getArea()
{
    return this->length * this->width;
};

double rectangle :: getPerimeter()
{
    return 2*(this->length+this->width);
};




rightTriangle :: rightTriangle(double leg1, double leg2)
{
  this->leg1 = leg1;
  this->leg2 = leg2;
}

double rightTriangle :: getArea()
{
    return (this->leg1*this->leg2)/2;
};

double rightTriangle :: getPerimeter()
{
    return this->leg1+this->leg2+(sqrt(pow(this->leg1, 2.0)+pow(this->leg2, 2.0)));
};

