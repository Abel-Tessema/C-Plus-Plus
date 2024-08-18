#include <iostream>
using namespace std;

int main() {
    int x = 10;
    double y = 5;
    bool result1 = x == y;
    cout << boolalpha << result1 << endl;

    char ch1 = 'a', ch2 = 'A';
    bool result2 = ch1 == ch2;
    cout << noboolalpha << result2 << endl;
    return 0;
}