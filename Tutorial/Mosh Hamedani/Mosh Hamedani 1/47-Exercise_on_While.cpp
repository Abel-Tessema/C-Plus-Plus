#include <iostream>
using namespace std;

int main() {
    int secretNum = 6;
    int guess;
    while (guess != secretNum) {
        cout << "Guess the secret number: ";
        cin >> guess;
        if (guess != secretNum) {
            cout << "Try again." << endl;
        }
    }
    cout << "Bravo!" << endl;
    return 0;
}