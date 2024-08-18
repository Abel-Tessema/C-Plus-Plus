#include <iostream>
using namespace std;

void swap(int* first, int* second) {
    int z;
    z = *second;
    *second = *first;
    *first = z;
}

int main() {
    int x = 10;
    int y = 20;
    swap(&x, &y);
    cout << "x = " << x << endl
         << "y = " << y << endl;

    return 0;
}