#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to check its divisibility by 5 and 11: ";
    cin >> num;
    if (num % 5 == 0 && num % 11 == 0)
        { cout << num << " is divisible by both 5 and 11." << endl; }
    else if (num % 5 == 0 && num % 11 != 0)
        { cout << num << " is divisible by 5, but not 11." << endl; }
    else if (num % 5 != 0 && num % 11 == 0)
        { cout << num << " is divisible by 11, but not 5." << endl; }
    else
        { cout << num << " is divisible by neither 5 nor 11." << endl; }

    return 0;
}