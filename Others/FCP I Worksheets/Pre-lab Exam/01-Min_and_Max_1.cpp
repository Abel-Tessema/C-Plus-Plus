// Find the minimum and maximum of two given numbers.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char num1, num2, maxNum;
    label1:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        if (isdigit(num1) && isdigit(num2)) {
            if (num1 > num2) { cout << num1 << " is the larger number." << endl; }
            else if (num1 == num2) { cout << "They are equal." << endl; }
            else { cout << num2 << " is the larger number." << endl; }
        }
        else {
            cout << "Invalid input. Please enter real numbers." << endl;
            goto label1;
        }

    return 0;
}