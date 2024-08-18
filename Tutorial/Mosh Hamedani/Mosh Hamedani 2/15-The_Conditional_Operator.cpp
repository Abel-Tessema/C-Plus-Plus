#include <iostream>
using namespace std;

int main() {
    cout << "Enter the first number: ";
    double num1;
    cin >> num1;

    cout << "Enter the second number: ";
    double num2;
    cin >> num2;

    // double max;
    // if (num1 >= num2) max = num1;
    // else max = num2;

    double max = (num1 >= num2) ? num1 : num2;

    cout << max << " is greater." << endl;

    return 0;
}