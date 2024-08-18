#include <iostream>
using namespace std;

int main() {
    double sales = 9'000;
    /*
      * double commission;
      * if (sales > 10'000) {commission = .10;}
      * else {commission = .05;}
    */
    double commission = (sales > 10'000) ? .10 : .05;
    cout << commission * 100 << "%" << endl;

    return 0;
}