#include <iostream>
using namespace std;

int main() {
    for (int x = 1; x <= 6; x++) {
        for (int y = 1; y <= 6; y++) {
            cout << "(" << x << ", " << y << ")" << endl;
        }
    }
    return 0;
}