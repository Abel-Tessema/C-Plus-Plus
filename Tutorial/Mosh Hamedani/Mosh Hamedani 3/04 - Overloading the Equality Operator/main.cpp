#include <iostream>
#include "Length.cpp"

using namespace std;

int main() {
    Length first{10};
    Length second{10};

    if (first == second)
        cout << "Equal" << endl;

    if (first == 10)
        cout << "Equal as well" << endl;

    return 0;
}