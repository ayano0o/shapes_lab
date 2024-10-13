#include "shape.hpp"
using namespace std;

class circle : public shape {

private:
   int radius;

public:
   explicit circle(int radius);
   double getArea() override;
   double getPerimeter() override;
   string name() const override {
        return "Circle";
    }

};

class rectangle : public shape {

private:
   int length;
   int width;

public: 
   explicit rectangle (int length, int width);
   double getArea() override;
   double getPerimeter() override;
   string name() const override {
        return "Rectangle";
    }

};


class rightTriangle : public shape {

private:
   int leg1;
   int leg2;

public: 
   explicit rightTriangle(int leg1, int leg2);
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
