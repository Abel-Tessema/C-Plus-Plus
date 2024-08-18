#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the first integer: ";
    cin >> x;

    int y;
    cout << "Enter the second integer: ";
    cin >> y;

    int z;
    if (x > y) {
        z = x;
        cout << z << " is larger.\n";
    }
    else if (x == y) {
        cout << "They are equal.\n";
    }
    else {
        z = y;
        cout << z << " is greater.\n";
    }

    int max = (x > y) ? x : y;
    cout << max << " is greater." << endl;

    (x == y) ? cout << "They are equal.\n" :
        (x > y) ? cout << x << " is greater.\n" :
            cout << y << " is greater.\n";

    return 0;
}