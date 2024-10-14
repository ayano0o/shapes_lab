#ifndef SHAPES_H
#define SHAPES_H

class shape {

public:

   virtual double getArea() = 0;
   virtual double getPerimeter() = 0;
   virtual std::string name() const = 0;

};
#endif
