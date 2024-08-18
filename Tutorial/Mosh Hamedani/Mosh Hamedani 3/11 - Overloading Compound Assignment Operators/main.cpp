#include <iostream>
#include "Length.cpp"

using namespace std;

int main() {
    Length first{10};
    Length second{20};
    first += second;

    cout << first << endl;

    return 0;
}