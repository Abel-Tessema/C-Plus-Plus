#include "Date.cpp"
#include "Time.cpp"
#include "DateTime.cpp"

#include <iostream>

using namespace std;

int main() {
    DateTime dateTime{2002, 8, 10, 19, 0, 0};
    cout << dateTime.getDay() << endl;

    return 0;
}