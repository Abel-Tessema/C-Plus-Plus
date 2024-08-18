#include <iostream>
#include <cmath>

using namespace std;

void numEntry(int& number) {
    cout << "Enter an integer between 1 and 1000 to check whether it is prime or not: ";
    cin >> number;
    if (number <= 1 || number > 1000) {
        cout << "Read the instruction well, numbnuts." << endl;
        numEntry(number);
    }
}

bool primeChecker(int number) {
    short sqrtOfNumber = floor(sqrt(number));
    for (short i = 2; i <= sqrtOfNumber; i++)
        if (number % i == 0) return false;
    return true;
}

int main() {
    int num;
    numEntry(num);
    cout << boolalpha << primeChecker(num) << endl;

    return 0;
}