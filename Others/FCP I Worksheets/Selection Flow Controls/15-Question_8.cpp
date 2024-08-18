#include <iostream>
using namespace std;

int main() {
    int age;
    bool canVote = true;
    bool validAge = true;
    cout << "Enter the age of the person: ";
    cin >> age;

    if (age < 18)
        { canVote = false; cout << "They are a child, "; }
    else if (age >= 18 && age < 50)
        { cout << "They are of the youth, "; }
    else if (age >= 50 && age <= 100)
        { cout << "They are old, "; }
    else
        { validAge = false; }
    
    if (!validAge) { return 0; };
    if (canVote) { cout << "and thus can vote." << endl; }
    else { cout << "and thus can't vote." << endl; }

    return 0;
}