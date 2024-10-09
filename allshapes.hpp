#include "shape.hpp"

class circle : public shape {

private:
   int radius;

public:
   explicit circle(int radius);
   int getArea() override;
   int getPerimeter() override;

};

class rectangle : public shape {

private:
   int length;
   int width;

public: 
   explicit rectangle (int length, int width);
   int getArea() override;
   int getPerimeter() override;

};


class rightTriangle : public shape {

private:
   int leg1;
   int leg2;

public: 
   explicit rightTriangle(int leg1, int leg2);
   int getArea() override;
   int getPerimeter() override;

};
