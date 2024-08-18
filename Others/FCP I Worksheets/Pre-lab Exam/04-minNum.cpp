// The smallest among N numbers
#include <iostream>
#include <limits>
using namespace std;

int main() {
    double num, minNum = numeric_limits<double>::min();
    cout << "Enter some numbers below.\nEnter 0 to terminate the input.\n";
    do {
        cout << "Enter number: ";
        cin >> num;
        if (num < minNum) { minNum = num; }
    } while (num != 0);

    cout << "The minimum numbers from the entries is: " << minNum << "." << endl;

    return 0;
}