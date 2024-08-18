#include <iostream>
using namespace std;

int main() {
    cout << "Enter a whole number: ";
    int n;
    cin >> n;
    int factorial = 1;
    cout << "The factorial of " << n << " is ";
    if (n >= 0) {
        for (n; n >= 1; n--) { factorial *= n;}
        cout << factorial << "." << endl;
    }
    else { cout << "undefined." << endl;}

    return 0;
}