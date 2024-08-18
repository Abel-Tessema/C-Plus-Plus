#include "Point.hpp"
#include <iostream>

using namespace std;

Point::Point(int x, int y) : x{x}, y{y} {
    
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

ostream& operator<<(ostream& stream, Point& point) {
    stream << "(" << point.x << ", " << point.getY() << ")";
}

Point& Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int) {
    Point copy = *this;
    operator++();
    return copy;
}