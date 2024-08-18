#include "Array.cpp"

#include <iostream>

using namespace std;

int main() {
    Array array{10};
    array[10] = 15;

    cout << array[0] << endl;

    return 0;
}