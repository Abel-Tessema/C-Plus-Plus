#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, n = 0, result = 0, remainder;
    cout << "Enter a number to check whether it's an Armstrong or not: ";
    cin >> originalNum;

    num = originalNum;

    while (num != 0) {
        num /= 10;
        n++;
    }
    
    num = originalNum;

    while (num != 0) {
        remainder = num % 10;
        result += round(pow(remainder, n));

        num /= 10;
    }

    if (result == originalNum) { cout << originalNum << " is an Armstrong number." << endl; }
    else { cout << originalNum << " is not an Armstrong number." << endl; }

    return 0;
}