#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double cost, rate, fraction, inflation, price;
    int years, choice;

    cout << "Enter the cost of the item: ";
    cin >> cost;

    cout << "Enter the number of years from now that the item will be purchased: ";
    cin >> years;

    cout << "Enter the rate of inflation as a percentage: ";
    cin >> rate;
    fraction = rate / 100.0;

    cout << "\nChoose the price of the item to display:" << endl;
    cout << "1. Price of a specific year" << endl;
    cout << "2. Each year of the specified number of years in tabular format" << endl;
    cin >> choice;

    if (choice == 1) {
        int specificYear;
        cout << "Enter the year you want to check the price for: ";
        cin >> specificYear;
        if (specificYear > years) {
            cout << "Invalid year entered. Year must be less than or equal to " << years << "." << endl;
            return 0;
        }
        double specificPrice = cost;
        for (int i = 1; i <= specificYear; i++) {
            inflation = specificPrice * fraction;
            specificPrice += inflation;
        }
        cout << "The price of the item in year " << specificYear << " is: $" << fixed << setprecision(2) << specificPrice << "." << endl;
    
    }
    else if (choice == 2) {
        for (int i = 1; i <= years; i++) {
            inflation = cost * fraction;
            price = cost + inflation;
            if (i == 1) {
                cout << "Year " << i << ": $" << fixed << setprecision(2) << price << endl;
            }
            else {
                cout << "Year " << i << ": $" << fixed << setprecision(2) << price
                     << ", difference from previous year: $" << fixed << setprecision(2) << price - cost << endl;
            }
            cost = price;
        }
    }
    else {
        cout << "Invalid choice entered. Program terminating." << endl;
        return 0;
    }

    return 0;
}