#include "AccountLocked.cpp"

#include <iostream>

using namespace std;

void login() {
    throw AccountLocked{};
}

int main() {
    try {
        login();
    }
    catch (const exception& ex) {
        cout << ex.what() << endl;
    }
    

    return 0;
}