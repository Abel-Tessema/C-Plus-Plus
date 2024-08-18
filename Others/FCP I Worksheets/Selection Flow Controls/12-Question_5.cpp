#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to check its sign: ";
    cin >> num;
    string sign = (num == 0) ? " is neither positive nor negative." :
                  (num > 0) ? " is positive." : " is negative.";
    cout << num << sign << endl;

    return 0;
}