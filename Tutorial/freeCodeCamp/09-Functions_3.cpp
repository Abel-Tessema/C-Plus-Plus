#include <iostream>

using namespace std;

void greetings(string name, int age);

int main() {

    greetings("Jash", 20);
    greetings("Garnet", 32);
    greetings("Amethyst", 19);
    greetings("Pearl", 25);

    return 0;

}

void greetings(string name, int age) {

    cout << "Hello " << name
         << ", you are " << age
         << "." << endl;

}