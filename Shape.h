#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
protected:
    std::string name;

public:
    Shape(const std::string& shapeName) {
        this->name = shapeName;
    }

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    std::string getName() const {
        return name;
    }

    virtual ~Shape() {
    }
};

#endif
