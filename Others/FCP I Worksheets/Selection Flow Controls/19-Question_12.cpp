#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter to check whether it's vowel or consonant: ";
    cin >> ch;
    bool isUppercaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    bool isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    // if (!isalpha(ch))
    if ((ch >=65 && ch <= 90) || (ch >= 97 && ch <=122)) {
        if (isUppercaseVowel || isLowercaseVowel)
            { cout << ch << " is a vowel." << endl; }
        else
            { cout << ch << " is a consonant." << endl; }
    }
    else
        { cout << "Please enter alphabetical letters only!" << endl; }

    return 0;
}