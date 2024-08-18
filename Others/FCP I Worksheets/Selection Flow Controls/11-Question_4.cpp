#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer to check whether it's odd or even: ";
    cin >> num;
    switch (num % 2 == 0) {
        case 0: cout << num << " is odd." << endl; break;
        case 1: cout << num << " is even." << endl; break;
    }

    return 0;
}