#include <iostream>
using namespace std;

int main() {
    double sales = 19'000;
    double commission;
    if (sales <= 10'000) {commission = .10;}
    else if (sales <= 15'000) {commission = .15;}
    else {commission = .20;}
    cout << commission * 100 << "%" << endl;

    return 0;
}