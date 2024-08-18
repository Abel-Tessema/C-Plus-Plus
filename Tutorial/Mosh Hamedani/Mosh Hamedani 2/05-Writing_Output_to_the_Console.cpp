#include <iostream>
using namespace std;

int main() {
    double sales = 95'000;
    double const stateTaxRate = 0.04;
    double const countyTaxRate = 0.02;

    // countyTaxRate = 5;

    double stateTax = stateTaxRate * sales;
    double countyTax = countyTaxRate * sales;
    double totalTax = stateTax + countyTax;

    cout << "Total sales = $" << sales << endl
         << "State Tax = $" << stateTax << endl
         << "County Tax = $" << countyTax << endl
         << "Total Tax = $" << totalTax << endl;

    return 0;
}