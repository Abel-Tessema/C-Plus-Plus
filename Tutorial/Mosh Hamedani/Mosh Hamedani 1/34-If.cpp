#include <iostream>
using namespace std;

int main() {
    int temperature = 70;
    if (temperature < 60)
        cout << "Cold\n";
        cout << "Wear warm clothes.\n" << endl;

    temperature = 50;
    if (temperature < 60) {
        cout << "Cold\n";
        cout << "Wear warm clothes.\n" << endl;
    }

    temperature = 70;
    if (temperature < 60)
        cout << "Cold" << endl;
    else if (temperature < 90)
        cout << "You're good to go." << endl;
    else
        cout << "Hot" << endl;
    
    return 0;
}