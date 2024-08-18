// Calculating the sum 1^2 - 3^2 + 5^2 - 7^2 + ... + n^2.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        sum += pow(-1, i) * pow((2 * i + 1), 2);
    }
    cout << "The sum of the first sign-alternating " << num << " odd numbers is: " << sum << "." << endl;

    return 0;
}