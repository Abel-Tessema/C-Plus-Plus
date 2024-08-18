// Accept two numbers and display the product, sum, and difference of the two numbers.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Their sum is: " << num1 + num2 << "." << endl
         << "Their absolute difference is: " << abs(num1 - num2) << "." << endl
         << "Their product is: " << num1 * num2 << "." << endl;

    return 0;
}