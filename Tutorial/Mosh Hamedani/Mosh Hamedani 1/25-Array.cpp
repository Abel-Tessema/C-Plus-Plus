#include <iostream>
using namespace std;

int main() {
    // int numbers1[5];
    int numbers1[5] {};
    numbers1[0] = 10;
    cout << numbers1 << endl
         << numbers1[0] << endl
         << numbers1[4] << endl
         << numbers1[5] << endl << endl;
    
    int numbers2[5] {1, 2, 4};
    cout << numbers2 << endl
         << numbers2[1] << endl
         << numbers2[3] << endl;
    
    int numbers3[] {8, 16, 32};
    
    return 0;
}