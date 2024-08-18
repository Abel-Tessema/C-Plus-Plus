#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;

    int c = b;
    b = a;
    a = c;

    cout << a << " " << b << endl;
    return 0;
}