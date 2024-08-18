#include <iostream>

using namespace std;

unsigned short leapYearChecker(short year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) return 1;
        else return 0;
    }
    else {
        if (year % 4 == 0) return 1;
        else return 0;
    }
}

int main() {
    cout << leapYearChecker(2000) << endl;
    cout << leapYearChecker(2023) << endl;
    cout << leapYearChecker(1900) << endl;


    return 0;
}