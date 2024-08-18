#include <iostream>
#include <limits>

void numEntry(string numAlpha, int numDigit) {
    while (true) {
        cout << numAlpha;
        cin >> numDigit;
        if (cin.fail()) {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }
}
using namespace std;

int main() {
    int first;
    numEntry("First: ", first);

    int second;
    numEntry("Second: ", second);

    cout << "You entered " << first << " and " << second << "." << endl;

    return 0;
}