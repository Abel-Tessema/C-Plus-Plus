#include <iostream>
using namespace std;

int main() {
    cout << "1 - Create account" << endl
         << "2 - Change password" << endl
         << "3 - Quit" << endl
         << "Select one of the above: ";
    short input;
    cin >> input;

    switch (input) {
        case 1: cout << "You selected 1.\n"; break;
        case 2: cout << "You selected 2.\n"; break;
        default: cout << "Goodbye!\n";
    }
    return 0;
}