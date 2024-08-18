#include <iostream>
using namespace std;

int main() {
    int num, f0 = 0, f1 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        if (i == 0) { cout << "f0 = " << f0 << endl; continue; }
        if (i == 1) { cout << "f1 = " << f1 << endl; continue; }
        nextTerm = f0 + f1;
        f0 = f1;
        f1 = nextTerm;
        cout << "f" << i << " = " << nextTerm << endl;
    }

    return 0;
}