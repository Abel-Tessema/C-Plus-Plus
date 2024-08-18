#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double radius;
    cout << "Enter the value of the radius: ";

    cin >> radius;

    double area = 3.1416 * pow(radius, 2);
    double circumference = 2 * 3.1416 * radius;

    cout << "The area is: " << area << " square units." << endl
         << "The circumference is: " << circumference << " units." << endl;

    return 0;

}