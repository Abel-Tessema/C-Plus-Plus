#include <iostream>

using namespace std;

int main() {

    /*
    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName;

    char initial = firstName.substr(0,1);

    cout << "The initial of your first name is: " << initial << "." << endl;
    */
    string name;
    cout << "Enter your name: ";
    /*
    cin >> name;
    cout << "Yahallo, " << name << "!" << endl;
    */

    getline(cin, name);
    cout << "Yahallo, " << name << "!" << endl;

    return 0;

}