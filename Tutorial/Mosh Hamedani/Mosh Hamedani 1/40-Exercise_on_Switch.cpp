#include <iostream>
using namespace std;

int main() {
    cout << "Enter the first number: ";
    double num1;
    cin >> num1;

    cout << "Enter the second number: ";
    double num2;
    cin >> num2;

    cout << "Enter the operator: ";
    char op;
    cin >> op;

    switch (op) {
        case '+': cout << num1 + num2 << endl; break;
        case '-': cout << num1 - num2 << endl; break;
        case '*': cout << num1 * num2 << endl; break;
        case '/': cout << num1 / num2 << endl; break;
        case '%': cout << (int)num1 % (int)num2 << endl; break;
        default: cout << "Invalid operation." << endl;
    }

    return 0;
}