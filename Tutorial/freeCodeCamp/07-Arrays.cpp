#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int luckyNums[] = {2, 4, 8, 16, 32};

    cout << luckyNums << endl;
    cout << luckyNums[0] << endl;
    
    luckyNums[2] = 6;
    cout << luckyNums[2] << endl;

    luckyNums[6] = 64;
    cout << luckyNums[6] << endl;

    int numArray1[20] = {3, 9, 27, 81};
    numArray1[21] = 243;
    cout << numArray1[21] << endl;



    return 0;

}