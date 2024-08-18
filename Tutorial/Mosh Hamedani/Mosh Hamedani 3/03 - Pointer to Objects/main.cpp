#include <iostream>
#include "SmartPointer.cpp"

using namespace std;

int main() {
    SmartPointer ptr(new int(10));

    cout << ptr.getPtr() << endl;
    cout << *(ptr.getPtr()) << endl;

    return 0;
}