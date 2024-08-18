#include <iostream>
#include <cmath>

using namespace std;

double cube(double num) {

    /*
    double result = pow(num, 3);
    return result;
    */

   return pow(num, 3);
   cout << "Yahallo!"; // after 'return', hence, not executed.

}

int main() {

    /*
    double answer = cube(3.0);
    cout << answer << endl;
    */

    cout << cube(3.0) << endl;

    return 0;

}