#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3, sum1, sum2, sum3;
    cout << "Enter the three side-lengths of a triangle (separated with white spaces) to check its viability: ";
    cin >> side1 >> side2 >> side3;
    sum1 = side2 + side3;
    sum2 = side1 + side3;
    sum3 = side1 + side2;
    if (side1 > 0 && side2 > 0 && side3 > 0) {
        if (sum1 > side1 && sum2 > side2 && sum3 > side3)
            { cout << "This triangle checks out.\n"; }
        else
            { cout << "Such a triangle can't exist.\n"; }
    }
    else { cout << "Enter positive side-lengths!" << endl; }

    return 0;
}