#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sqrtOfNum;
    cout << "Enter a positive integer: ";
    cin >> num;
    sqrtOfNum = sqrt(num);
    for (int i = 2; i <= sqrtOfNum; i++) {
        if (num % i == 0) {
            cout << num << " is composite." << endl;
            break;
        }
        else {
            cout << num << " is prime." << endl;
            break;
        }
    }

    return 0;
}