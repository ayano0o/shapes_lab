#include "shape.hpp"

class circle : public shape {

private:
   int area;
   int perimeter;
   int radius;

public:
   explicit circle(int area);
   explicit circle(int perimeter);
   int getArea() override;
   int getPerimeter() override;

};

class rectangle : public shape {

private:
   int area;
   int perimeter;
   int length;
   int width;

public: 
   explicit rectangle(int area);
   explicit rectangle(int perimeter);
   int getArea() override;
   int getPerimeter() override;

};


class rightTriangle : public shape {

private:
   int area;
   int perimeter;
   int leg1;
   int leg2;

public: 
   explicit rightTriangle(int area);
   explicit rightTriangle(int perimeter);
   int getArea() override;
   int getPerimeter() override;

};
