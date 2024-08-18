#include <iostream>
using namespace std;

int main() {
    int x = 1;
    double y = 2.0;
    // double z = x + y;
    // int z = x + y;
    // int z = x + (int)y;
    int z = x + static_cast<int>(y);
    cout << z << endl;
    return 0;
}