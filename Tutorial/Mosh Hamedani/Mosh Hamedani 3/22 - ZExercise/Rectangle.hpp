#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.cpp"

class Rectangle : public Shape {
public:
    void draw() const override;
private:
    int length;
    int width;
};

#endif