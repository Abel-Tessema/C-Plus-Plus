#include <iostream>
using namespace std;

int power (int baseNum, int powNum) {
    int result = 1;
    for (int i = 0; i < powNum; i++) {
        result *= baseNum;
    }
    return result;
}

int main () {
    int bNum, pNum;
    cout << "Enter integer base number: ";
    cin >> bNum;
    cout << "Enter integer power number: ";
    cin >> pNum;
    cout << bNum << " raised to " << pNum
         << " is " << power (bNum, pNum)
         << "." << endl;
    return 0;
}