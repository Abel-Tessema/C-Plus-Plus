#include "Rectangle.cpp"
#include "Triangle.cpp"

#include <iostream>

using namespace std;

int main() {
    Shape shape;
    shape.draw();

    Rectangle rectangle;
    rectangle.draw();
    
    Triangle triangle;
    triangle.draw();

    return 0;
}