#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer to check whether it's even or odd: ";
    cin >> num;
    if (num % 2 == 0) {cout << num << " is even." << endl; }
    else { cout << num << " is odd." << endl; }

    return 0;
}