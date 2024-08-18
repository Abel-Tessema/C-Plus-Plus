#include <iostream>
using namespace std;

int main() {
    cout << "Enter two numbers: ";
    double first, second;
    cin >> first >> second;

    cout << "Enter an operator: ";
    char ch;
    cin >> ch;

    double result;
    switch (ch) {
        case '+': cout << first + second << endl; break;
        case '-': cout << first - second << endl; break;
        case '*': cout << first * second << endl; break;
        case '/': cout << first / second << endl; break;
        default: cout << "Invalid operator." << endl;
    }

    return 0;
}