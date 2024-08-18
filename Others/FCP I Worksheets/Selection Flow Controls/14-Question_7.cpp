#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;
    // if (isdigit(ch))
    if (ch >= 48 && ch <= 57)
        { cout << "It's a digit." << endl; }
    // else if (isupper(ch))
    else if (ch >= 65 && ch <= 90)
        { cout << "It's an uppercase letter." << endl; }
    // else if (islower(ch))
    else if (ch >= 97 && ch <= 122)
        { cout << "It's a lowercase letter." << endl; }
    else
        { cout << "It's a special character." << endl; }

    /*
    char ch1 = 'a';
    cout << ch1 << endl;
    */
    

    return 0;
}