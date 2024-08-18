#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string convertToString(double number, short precision) {
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return stream.str();
}

int main() {
    cout << convertToString(12.345, 2) << endl;

    return 0;
}