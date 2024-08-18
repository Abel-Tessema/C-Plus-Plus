#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers separated with a white space: ";
    cin >> num1 >> num2;
    cout << (num1 == num2) ? "They are equal.\n" :
        (num1 > num2) ? "The first number is greater.\n" :
                        "The second number is greater.\n";

    return 0;
}