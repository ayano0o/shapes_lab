#include "shape.hpp"

class circle : public shape {

private:
   double radius;

public:
   explicit circle(double radius);
   double getArea() override;
   double getPerimeter() override;

};

class rectangle : public shape {

private:
   double length;
   double width;

public: 
   explicit rectangle (double length, double width);
   double getArea() override;
   double getPerimeter() override;

};


class rightTriangle : public shape {

private:
   double leg1;
   double leg2;

public: 
   explicit rightTriangle(double leg1, double leg2);
   double getArea() override;
   double getPerimeter() override;

};
