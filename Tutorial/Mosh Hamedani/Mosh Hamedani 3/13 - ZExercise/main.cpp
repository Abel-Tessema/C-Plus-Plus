#include "Point.cpp"
#include <iostream>

using namespace std;

int main() {
    Point first{10, 20};
    Point second = first++;
    cout << first << endl << second << endl << endl;

    Point third{10, 20};
    Point fourth = ++third;
    cout << third << endl << fourth << endl;

    return 0;
}