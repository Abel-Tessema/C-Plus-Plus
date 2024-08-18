#include <iostream>
using namespace std;

// Global variable (global scope)
const double taxRate = 0.2;

double calculateTax(double sales) {
    return sales * taxRate;
}

int main() {
    // Local variable (local scope)
    int sales = 10'000;     // Only 'main' can access it.
    // taxRate = 0;     // Overriding
    double tax = calculateTax(sales);
    cout << tax << endl;
    
    return 0;
}