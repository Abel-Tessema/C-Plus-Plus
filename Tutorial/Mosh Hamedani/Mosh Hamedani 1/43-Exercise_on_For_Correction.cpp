#include <iostream>
using namespace std;

int main() {
    cout << "Enter a whole number: ";
    int number;
    cin >> number;
    int factorial = 1;
    if (number >= 0) {
        for (int i = 1; i <= number; i++) { factorial *= i; }
        cout << "The factorial of " << number << " is " << factorial << "." << endl;
    }
    else { cout << "Input is not a whole number." << endl; }

    return 0;
}