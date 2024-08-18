#include "Point.hpp"
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
    setX(x);
    setY(y);
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

ostream& operator<<(ostream& stream, Point& point) {
    stream << "(" << point.getX() << ", " << point.getY() << ")";
}