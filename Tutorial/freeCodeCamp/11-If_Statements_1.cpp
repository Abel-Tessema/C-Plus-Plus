#include <iostream>

using namespace std;

int main() {

    /*
    bool isMale = false;
    if (isMale) {
        cout << "You are male." << endl;
    }
    else {
        cout << "You are not male." << endl;
    }
    */

    /*
    bool isMale = true;
    // bool isTall = true;
    bool isTall = false;
    if(isMale && isTall) {
        cout << "You are a tall male." << endl;
    }
    else {
        cout << "You're either not male or not "
             << "tall." << endl;
    }
    */

    /*
    // bool isMale = true;
    bool isMale = false;
    bool isTall = false;
    if(isMale || isTall) {
        cout << "You're either male, or tall, "
             << "or both." << endl;
    }
    else {
        cout << "You're neither male nor tall."
             << endl;
    }
    */

    bool isMale = false; // Try both.
    bool isTall = false; // Try both.
    if(isMale && isTall) {
        cout << "You're both male and tall."
             << endl;
    }
    else if(isMale && !isTall) {
        cout << "You're male, but not tall."
             << endl;
    }
    else if(!isMale && isTall) {
        cout << "You're tall, but not male."
             << endl;
    }
    else {
        cout << "You're neither male nor tall."
             << endl;
    }

    return 0;

}