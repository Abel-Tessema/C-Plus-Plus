#include <iostream>
using namespace std;

int main() {
    int f0, f1, nextTerm, num;
    cout << "Enter the number of fibonacci numbers you want to see: ";
    cin >> num;
    f0 = 0;
    f1 = 1;
    cout << "f0 = " << f0 << endl
         << "f1 = " << f1 << endl;
    for (int i = 2; i < num; i++) {
        nextTerm = f0 + f1;
        cout << "f" << i << " = " << nextTerm << endl;
        f0 = f1;
        f1 = nextTerm;
    }

    return 0;
}