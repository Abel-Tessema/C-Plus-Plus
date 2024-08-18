#include <iostream>
using namespace std;

int getMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    cout << getMax(7, 10) << endl;
    return 0;
}