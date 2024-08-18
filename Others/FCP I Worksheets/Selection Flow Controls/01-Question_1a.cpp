#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers separated with a white space: ";
    cin >> num1 >> num2;
    double max = fmax(num1, num2);
    cout << max << " is larger." << endl;

    return 0;
}