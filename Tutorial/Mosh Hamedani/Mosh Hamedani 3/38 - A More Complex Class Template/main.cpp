#include "Array.cpp"
#include "Pair.hpp"

#include <iostream>

using namespace std;

int main() {
    Array<int> array1{10};
    array1[0] = 15;
    cout << array1[0] << endl;

    Array<string> array2{5};
    array2[0] = "Yahallo!";
    cout << array2[0] << endl;

    Array<Pair<string, int>> array3{5};
    array3[0] = {"a", 1};
    cout << array3[0] << endl;

    return 0;
}