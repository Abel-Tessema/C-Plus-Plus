#include <iostream>
using namespace std;

int main() {
    int secretNum = 3;
    int guess;
    while (guess != secretNum) {
        cout << "Enter the secret number: ";
        cin >> guess;
        if (guess != secretNum)
            cout << "Try again." << endl;
    }
    cout << "You got it right! The number was " << secretNum << "." << endl;

    return 0;
}