#include "shape.hpp"
using namespace std;

class circle : public shape {

private:
   double radius;

public:
   explicit circle(double radius);
   double getArea() override;
   double getPerimeter() override;
   string name() const override {
        return "Circle";
    }

};

class rectangle : public shape {

private:
   double length;
   double width;

public: 
   explicit rectangle (double length, double width);
   double getArea() override;
   double getPerimeter() override;
   string name() const override {
        return "Rectangle";
    }

};


class rightTriangle : public shape {

private:
   double leg1;
   double leg2;

public: 
   explicit rightTriangle(double leg1, double leg2);
   double getArea() override;
   double getPerimeter() override;
   string name() const override {
        return "Right triangle";
    }

};

class square : public rectangle {
public:
    explicit square(int side);  
    string name() const override {
        return "Square";
    }
};

class isoscelesRightTriangle : public rightTriangle {
public:
    explicit isoscelesRightTriangle(int leg);  
    string name() const override {
        return "Isosceles right triangle";
    }
};

std::string printAreaToScreen(shape *s) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "The area of the " << s->name() << " is " << s->getArea();
    return oss.str();
}
