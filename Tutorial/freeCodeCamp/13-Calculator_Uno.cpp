#include <iostream>
using namespace std;
int main () {
    double num1, num2;
    char op; // Operator
    double result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
    else {
        cout << "Invalid operator" << endl;
    }
    cout << result << endl;
    return 0;
}