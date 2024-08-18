// The sum of the first N integers.
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i <= num * 2; i = i + 2) {
        sum += i;
    }
    cout << "The sum of the first " << num << " even whole numbers is: " << sum << "." << endl;

    return 0;
}