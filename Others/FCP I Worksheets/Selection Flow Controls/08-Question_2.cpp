#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Enter day and month of birth respectively separated with a white space: ";
    cin >> day >> month;
    string output = (day == 14 && month == 3) ? "Happy birthday!\n" : "Hello.\n";
    cout << output;

    return 0;
}