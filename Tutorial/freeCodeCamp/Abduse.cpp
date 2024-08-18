#include <iostream.h>
#include <numeric>

using namespace std;

int main () {

    int num1, num2, Num1, Num2, temp, lcm, gcd;
    num1 = 24; num2 = 18;
    Num1 = num1;
    Num2 = num2;
    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    gcd = num1;
    lcm = Num1 * Num2 / gcd;
    cout << gcd << endl;
    cout << lcm << endl;
    return 0;

}