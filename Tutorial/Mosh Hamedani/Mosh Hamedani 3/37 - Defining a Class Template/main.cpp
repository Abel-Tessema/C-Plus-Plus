#include "Pair.hpp"

#include <iostream>

using namespace std;

int main() {
    Pair<string, int> pair{"a", 1};
    cout << pair.getKey() << endl;

    return 0;
}