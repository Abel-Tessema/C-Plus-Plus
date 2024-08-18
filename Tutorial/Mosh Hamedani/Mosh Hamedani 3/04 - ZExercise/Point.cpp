#include "Point.hpp"

Point::Point(int x, int y) : x{x}, y{y} {}

bool Point::operator==(const Point &other) const {
    return (x == other.x && y == other.y);
}