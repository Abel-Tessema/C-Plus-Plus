#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Enter a number for 2 to be raised: ";
    double number;
    cin >> number;
    double twoToNumber = pow(2, number);
    cout << "2 raised to "
         << number
         << " is "
         << twoToNumber << "."
         << endl;

    return 0;

}