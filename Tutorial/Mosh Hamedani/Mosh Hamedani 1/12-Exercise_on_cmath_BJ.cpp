#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "Enter the radius of the circle: ";
    double radius;
    double pi = 3.1416;
    cin >> radius;
    double area = pi * pow(radius, 2);
    cout << "The area of the circle is: "
         << area
         << " square units." << endl;
    
    return 0;

}