#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    // Read inputs
    double circleRadius1, rectWidth, rectHeight, circleRadius2;
    cin >> circleRadius1;
    cin >> rectWidth;
    cin >> rectHeight;
    cin >> circleRadius2;


    Shape* shapes[3];
    shapes[0] = new Circle(circleRadius1);
    shapes[1] = new Rectangle(rectWidth, rectHeight);
    shapes[2] = new Circle(circleRadius2);

    for(int i={};i<3;i++){
        std::cout << shapes[i]->getName() << ":\n";
        std::cout << "  Area: " << shapes[i]->area() << "\n";
        if(i != 2){
            std::cout << "  Perimeter: " << shapes[i]->perimeter() << "\n" << "\n";
        }
        else{
            std::cout << "  Perimeter: " << shapes[i]->perimeter() << "\n";
        }
    }

    for(int i={};i<3;i++){
        delete shapes[i];
    }

    return 0;
}
