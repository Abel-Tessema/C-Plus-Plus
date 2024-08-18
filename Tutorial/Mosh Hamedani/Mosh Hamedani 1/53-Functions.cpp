#include <iostream>
using namespace std;
/*
void greet() {
    cout << "Yahallo!" << endl;
}
*/

// void greet(string firstName, string lastName) {
void greet(string name) {
    cout << "Yahallo, " << name << "!" << endl;
}

string fullName(string firstName, string lastName) {
    // Concatenating (combining)
    return firstName + " " + lastName;
}

int main() {
    /*
    greet("Bela", "Jash");
    cout << "Done." << endl;

    string name = fullName("Bela", "Joshua");
    cout << name << endl;
    */

    /*
    string name = fullName("Bela", "Jash");
    greet(name);
    */

    greet(fullName("Bela", "Jash"));
    return 0;
}