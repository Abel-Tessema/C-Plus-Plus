#include <iostream>
#include "SmartPointer.cpp"

using namespace std;

int main() {
    SmartPointer ptr(new int);

    *ptr = 10;
    cout << *ptr << endl;

    *ptr = 20;
    cout << *ptr << endl;

    return 0;
}