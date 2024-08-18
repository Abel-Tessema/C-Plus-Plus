#include <iostream>
using namespace std;

/* void greet(); */
// Function declaration/prototype
void greet(string name);

int main() {
    greet("Bela Jash");

    return 0;
}

// Function definition
void greet(string name) {
    cout << "Yahallo, " << name << "!" << endl;
}