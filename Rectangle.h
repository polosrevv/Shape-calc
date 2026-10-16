#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : Shape("Rectangle") {
        this->width = w;
        this->height = h;
    }

    double area() const override {
        return this->width * this->height;
    }

    double perimeter() const override {
        return 2 * (this->width + this->height);
    }
};

#endif
