#include <iostream>
using namespace std;

int main() {

    double a;
    double b;

    cout << "Enter two numbers consecutively: ";

    cin >> a >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = a / b;

    cout << "Their sum is: " << sum << "." << endl
         << "Their difference is: " << difference << "." << endl
         << "Their product is: " << product << "." << endl
         << a << " divided by " << b << " is: " << division << "." << endl;

    return 0;

}