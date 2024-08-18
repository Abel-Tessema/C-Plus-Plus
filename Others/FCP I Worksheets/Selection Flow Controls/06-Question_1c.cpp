#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, max, sum, average;
    cout << "Enter three numbers separated with white spaces: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3) { max = num1; }
    else if (num2 >= num1 && num2 >= num3) { max = num2; }
    else { max = num3; }
    sum = num1 + num2 + num3;
    average = sum / 3;

    cout << "The largest of the three numbers is " << max << "." << endl
         << "Their sum is " << sum << "." << endl
         << "Their average is " << average << "." << endl;
    
    return 0;
}