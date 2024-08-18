#include <iostream>
#include "Length.cpp"

using namespace std;

int main() {
    Length first{10};
    Length second{20};
    Length third = first + second;

    cout << third << endl;

    return 0;
}