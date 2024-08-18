#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit number: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // Remainder contains the last digit
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // Removing last digit from the original number
        originalNum /= 10;
    }

    if (result == num) { cout << num << " is an Armstrong number." << endl; }
    else { cout << num << " is not an Armstrong number." << endl; }

    return 0;
}