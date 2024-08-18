#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Enter a number to evaluate its square root: ";
    double number;
    cin >> number;
    double squareRoot = sqrt(number);
    cout << "The square root of "
         << number
         << " is "
         << squareRoot
         << "." << endl;

    return 0;

}