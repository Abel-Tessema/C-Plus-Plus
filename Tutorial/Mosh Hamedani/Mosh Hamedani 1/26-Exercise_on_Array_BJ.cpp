#include <iostream>
using namespace std;

int main() {
    string name1;
    cout << "Enter the first name: ";
    getline(cin, name1);

    string name2;
    cout << "Enter the second name: ";
    getline(cin, name2);

    string name3;
    cout << "Enter the third name: ";
    getline(cin, name3);

    string names[3] = {name1, name2, name3};
    cout << "The first name is: " << names[0] << "." << endl;

    return 0;
}