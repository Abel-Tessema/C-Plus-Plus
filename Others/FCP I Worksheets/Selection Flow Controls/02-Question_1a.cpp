#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers separated with a white space: ";
    cin >> num1 >> num2;
    if (num1 == num2) { cout << "They are equal." << endl; }
    else if (num1 > num2) { cout << num1 << " is larger." << endl; }
    else { cout << num2 << " is larger." << endl; }

    return 0;
}