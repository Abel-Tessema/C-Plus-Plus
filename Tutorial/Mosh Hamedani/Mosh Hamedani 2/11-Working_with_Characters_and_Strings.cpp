#include <iostream>
using namespace std;

int main() {
    cout << "Enter street: ";
    string street;
    getline(cin, street);

    cout << "Enter city: ";
    string city;
    getline(cin, city);

    cout << "Enter state: ";
    string state;
    getline(cin, state);

    cout << "Enter zip code: ";
    string zipCode;
    getline(cin, zipCode);

    cout << "Your address is as follows: " << endl
         << street << endl
         << city << ", " << state << ", " << zipCode << endl;

    return 0;
}