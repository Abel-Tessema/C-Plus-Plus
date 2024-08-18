#include <iostream>
#include "Length.cpp"

using namespace std;

int main() {
    Length first{10};
    Length second = first++;
    cout << first << ", " << second << endl;

    Length third{10};
    Length fourth = ++third;
    cout << third << ", " << fourth << endl;

    return 0;
}