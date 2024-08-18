#include <iostream>

using namespace std;

template<typename T>

T larger(T first, T second) {
    return (first > second) ? first : second;
}

int main() {
    cout << larger(5, 10) << endl;
    // cout << larger(5.5, 10) << endl;     // Apparently, double and int don't work together.
    cout << larger(5.5, 10.0) << endl;
    cout << larger('a', 'b') << endl;

    return 0;
}