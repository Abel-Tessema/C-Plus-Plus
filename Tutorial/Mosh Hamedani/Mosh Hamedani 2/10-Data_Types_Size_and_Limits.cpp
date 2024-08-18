#include <iostream>
#include <limits>
using namespace std;

int main() {
    // cout << sizeof(double) << endl;
    // cout << sizeof(string) << endl;
    cout << numeric_limits<double>::min() << endl
         << numeric_limits<double>::max() << endl;

    return 0;
}