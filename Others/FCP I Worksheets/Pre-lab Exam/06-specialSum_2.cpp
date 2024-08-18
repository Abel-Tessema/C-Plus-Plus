#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0;
    label1:
        cout << "Enter an odd number: ";
        cin >> num;
        if (num % 2 != 0) {
            for (int i = 1; i <= num; i = i + 2) {
                sum += pow(-1, (i - 1) / 2) * pow(i, 2);
            }
        }
        else {
            cout << "Please enter an ODD number." << endl;
            goto label1;
        }
        cout << "The sum of sign-alternating odd numbers less than or equal to " << num << " is: " << sum << "." << endl;

    return 0;
}