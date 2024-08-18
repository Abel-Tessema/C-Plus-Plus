#include <iostream>

using namespace std;

int main() {

    double a, b, c;
    cout << "Enter three numbers separated with a space: ";
    cin >> a >>  b >> c;

    ((a < b) && (b < c))
    ? cout << "They are sorted correctly.\n"
    : cout << "They are sorted incorrectly.\n" << endl;

    return 0;
    
}