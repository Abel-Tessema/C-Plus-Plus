#include <iostream>
#include <cmath>

using namespace std;

int main() {

    /*
    float frac = 5.0 / 7;
    double frac = 5.0 / 7;
    cout << frac << endl;
    */

    int wnum = 5;
    double dnum = 5.5;

    cout << wnum << endl;
    cout << dnum << endl;

    wnum++;
    cout << wnum << endl;

    wnum--;
    cout << wnum << endl;

    wnum += 80;
    cout << wnum << endl;

    wnum %= 100;
    cout << wnum << endl;

    wnum /= 17 + 3;
    cout << wnum << endl;

    cout << pow(4, -0.5) << endl;
    cout << pow(-4, 0.5) << endl;
    cout << sqrt(15'625) << endl;
    cout << cbrt(15'625) << endl;
    cout << round(4.3) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.99) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(3, -10) << endl;

    return 0;

}