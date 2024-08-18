#include <iostream>
using namespace std;

int main() {

    double sales = 95000;
    cout << "Sales = $" << sales << endl;

    const double stateTaxRate = 0.04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax = $" << stateTax << endl;

    const double countyTaxRate = 0.02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax = $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total Tax = $" << totalTax << endl;

    double netSales = sales - totalTax;
    cout << "Net Sales = $" << netSales << endl;

    return 0;

}