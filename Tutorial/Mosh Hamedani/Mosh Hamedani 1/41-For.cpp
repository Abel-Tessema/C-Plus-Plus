#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) { cout << i << endl; }
    cout << endl;
    for (int i = 5; i > 0; i--) {cout << i << endl;}
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 != 0) { cout << i << endl; }
    }

    return 0;
}