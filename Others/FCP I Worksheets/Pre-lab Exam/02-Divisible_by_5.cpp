// Check if a number received from the keyboard is divisible by 5 or not.
#include <iostream>
using namespace std;

int main() {
    int num, result, remainder;
    cout << "Enter a number to check its divisibility by 5: ";
    cin >> num;
    result = num / 5;
    remainder = num % 5;
    if (num % 5 == 0) {
        cout << num << " is divisible by 5." << endl;
        cout << "We get a quotient of " << result << "." << endl;
    }
    else {
        cout << num << " is not divisible by 5." << endl;
        cout << "We get a quotient of " << result << ", and a remainder of " << remainder << "." << endl;
    }

    return 0;
}