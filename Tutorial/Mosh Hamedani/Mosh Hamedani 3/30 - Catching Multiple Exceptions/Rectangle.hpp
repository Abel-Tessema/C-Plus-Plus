#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.cpp"

class Rectangle : public Shape {
public:
    void draw() const override;
    void setLength(int length);
    void setWidth(int width);
    int getLength() const;
    int getWidth() const;
private:
    int length;
    int width;
};

#endif