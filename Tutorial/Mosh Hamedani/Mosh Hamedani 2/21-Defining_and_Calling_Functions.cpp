#include <iostream>
using namespace std;

int max(int first, int second) {
    if (first >= second) return first;
    else return second;
}

int main() {
    cout << max(15, 9) << endl;

    return 0;
}