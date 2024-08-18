#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter to check whether it's vowel or consonant: ";
    cin >> ch;
    bool isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    bool isUppercaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    switch ((ch >=65 && ch <= 90) || (ch >= 97 && ch <=122)) {
        case 0: cout << "Please enter alphabetical letters only!" << endl; break;
        case 1:
            switch (isLowercaseVowel || isUppercaseVowel) {
                case 0: cout << ch << " is a consonant." << endl; break;
                case 1: cout << ch << " is a vowel." << endl; break;
            } break;
    }

    return 0;
}