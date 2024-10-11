#include "shape.hpp"

class circle : public shape {

private:
   int radius;

public:
   explicit circle(int radius);
   double getArea() override;
   double getPerimeter() override;

};

class rectangle : public shape {

private:
   int length;
   int width;

public: 
   explicit rectangle (int length, int width);
   double getArea() override;
   double getPerimeter() override;

};


class rightTriangle : public shape {

private:
   int leg1;
   int leg2;

public: 
   explicit rightTriangle(int leg1, int leg2);
   double getArea() override;
   double getPerimeter() override;

};
class square : public rectangle {
public:
   explicit square(int side) : rectangle(side, side) {}
};

class isoscelesRightTriangle : public rightTriangle {
public:
   explicit isoscelesRightTriangle(int leg) : rightTriangle(leg, leg) {}
};
