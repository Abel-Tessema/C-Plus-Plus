#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive even integer: ";
    cin >> num;
    if (num % 2 == 0 && num > 0)
        { num *= num; cout << num << endl; }
    // else;

    return 0;
}