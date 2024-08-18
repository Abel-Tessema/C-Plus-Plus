#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << fixed;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot" << endl;
    cout << setprecision(10) << 12.3456789 << endl;
    return 0;
}