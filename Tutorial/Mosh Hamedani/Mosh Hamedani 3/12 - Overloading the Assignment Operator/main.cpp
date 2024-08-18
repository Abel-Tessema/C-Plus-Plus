#include <iostream>
#include "Length.cpp"

using namespace std;

int main() {
    Length first{10};
    Length second{20};
    first = second;         // Assignment

    Length third{30};
    Length fourth = third;  // Copying

    cout << first << endl;

    return 0;
}