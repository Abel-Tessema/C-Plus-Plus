#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i % 3 != 0) { cout << i << endl; }
    }
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        if (i % 3 == 0) { continue; }
        cout << i << endl;
    }
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        if (i % 3 == 0) { break; }
        cout << i << endl;
    }

    // We regularly use 'break' in infinite loops.
    int number;
    while (true) {
        cout << "Enter a number between 1 and 5: ";
        cin >> number;
        if (number >= 1 && number <=5) { break; }
        cout << "Between 1 and 5, numbnuts." << endl;
    }
    cout << "You have selected " << number << "." << endl;

    return 0;
}