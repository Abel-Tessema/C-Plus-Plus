#include <iostream>
using namespace std;

int main() {

    cout << "Enter temperature in degrees fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celcius = (fahrenheit - 32) * 5 / 9;
    cout << "The temperature in degrees celcius is: " << celcius << "." << endl;

    return 0;

}