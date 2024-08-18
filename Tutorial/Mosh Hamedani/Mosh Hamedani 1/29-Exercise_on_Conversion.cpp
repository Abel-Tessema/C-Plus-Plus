#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 3;
    double z = x / y;
    cout << z << endl;

    z = (double)x / y;
    cout << z << endl;

    z = x / (double)y;
    cout << z << endl;

    z = (double)x / (double)y;
    cout << z << endl;

    z = static_cast<double>(x) / y;
    cout << z << endl;

    z = double(x) / y;
    cout << z << endl;

    z = double(x/y);
    cout << z << endl;

    return 0;
}