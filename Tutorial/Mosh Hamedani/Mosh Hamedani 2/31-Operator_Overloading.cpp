#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

ostream& operator<< (ostream& stream, const Point& point) {
    return stream << "(" << point.x << ", " << point.y << ")";
}

bool operator== (const Point& point1, const Point& point2) {
    return (point1.x == point2.x && point1.y == point2.y);
}

int main() {
    Point point1 = { 2, 4 };

    cout << point1 << endl;

    Point point2 = { 2, 3 };

    if (point1 == point2) cout << "Equal" << endl;
    else cout << "Not equal" << endl;

    return 0;
}