#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "The first " << num << " natural numbers are: ";
    for (int i = 1; i < num; i++) {
        cout << i << ", ";
    }
    cout << "and " << num << "." << endl;
    cout << "Moreover, their sum is: ";
    for (int j = 1; j <= num; j++) {
        sum += j;
    }
    cout << sum << "." << endl;

    return 0;
}