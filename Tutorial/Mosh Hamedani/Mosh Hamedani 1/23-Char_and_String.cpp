#include <iostream>
using namespace std;

int main() {
    char ch1 = 'B';
    cout << ch1 << endl;
    cout << +ch1 << endl;
    char ch2 = 65;
    cout << ch2 << endl;
    cout << +ch2 << endl << endl;

    string name1 = "Bela Jash";
    cout << name1 << endl;

    string name2;
    cout << "Enter your full name: ";
    // cin >> name2;
    getline(cin, name2);
    cout << "Yahallo, " << name2 << "!" << endl;
    return 0;
}