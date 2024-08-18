#include <iostream>
using namespace std;

int main() {
    int i, n;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 2) { isPrime = false; }
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) { isPrime = false; break; }
    }
    if (isPrime) { cout << n << " is prime.\n"; }
    else { cout << n << " is not prime.\n"; }

    return 0;
}