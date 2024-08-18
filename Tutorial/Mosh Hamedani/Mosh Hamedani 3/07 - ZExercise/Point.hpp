#ifndef POINT_HPP
#define POINT_HPP

#include <ostream>

using namespace std;

class Point {
public:
    Point(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
private:
    int x;
    int y;
};

ostream& operator<<(ostream& stream, Point& point);

#endif