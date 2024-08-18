#include <iostream>
using namespace std;

double calculateTax(double income, double taxRate = 0.2 /*, double expense*/) {
    /* double expense => Parameters with unspecified default values should be written
                          before those that have been given default values. */
    return income * taxRate;
}

int main() {
    cout << calculateTax(10'000) << endl;
    cout << calculateTax(10'000, 0.3) << endl;
    cout << calculateTax(10'000) << endl;
    return 0;
}