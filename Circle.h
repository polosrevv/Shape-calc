#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle") {
        this->radius = r;
    }

    double area() const override {
        return 3.14159 * this->radius * this->radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * this->radius;
    }
};

#endif
