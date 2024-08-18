#ifndef POINT_HPP
#define POINT_HPP

#include <ostream>

using namespace std;

class Point {
public:
    Point(int x, int y);
    int getX();
    int getY();
    Point& operator++();
    Point operator++(int);
private:
    int x;
    int y;
    friend ostream& operator<<(ostream& stream, Point& point);
};

ostream& operator<<(ostream& stream, Point& point);

#endif