#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number to evaluate its factorial: ";
    int num;
    cin >> num;

    int factorial = 1;
    for (int i = 1; i <= num; i++)
        factorial *= i;
    cout << "The factorial is " << factorial << "." << endl;

    return 0;
}