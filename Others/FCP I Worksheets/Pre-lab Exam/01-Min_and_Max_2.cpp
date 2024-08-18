// Find the minimum and maximum of two given numbers.
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 == num2) { cout << "They are equal." << endl; }
    else if (num1 > num2) { cout << num1 << " is the greater number." << endl; }
    else { cout << num2 << " is the greater number." << endl; }

    return 0;
}