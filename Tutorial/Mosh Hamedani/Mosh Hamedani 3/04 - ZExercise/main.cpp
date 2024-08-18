#include <iostream>
#include "Point.cpp"

using namespace std;

int main() {
    Point first{10, 20};
    Point second{10, 20};

    if (first == second)
        cout << "Equal" << endl;

    return 0;
}