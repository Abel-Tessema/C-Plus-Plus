#include <iostream>
using namespace std;

// Signature = name + (number and type of parameters)

void greet(string name) {
    cout << "Yahallo " << name << "!" << endl;
}

void greet(string title, string name) {
    cout << "Yahallo, " << title << " " << name << "!" << endl;
}

int main() {
    greet("Bela Jash");
    greet("Vice Rep", "Bela Jash");
    return 0;
}