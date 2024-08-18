#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "char = " << sizeof(char) << endl
         << "bool = " << sizeof(bool) << endl
         << "short = " << sizeof(short) << endl
         << "int = " << sizeof(int) << endl
         << "long = " << sizeof(long) << endl
         << "float = " << sizeof(float) << endl
         << "double = " << sizeof(double) << endl
         << "long long = " << sizeof(long long) << endl
         << "long double = " << sizeof(long double) << endl
         << "string = " << sizeof(string) << endl << endl;
    cout << "Min short = " << numeric_limits<short>::min() << endl
         << "Max short = " << numeric_limits<short>::max() << endl
         << "Min int = " << numeric_limits<int>::min() << endl
         << "Max int = " << numeric_limits<int>::max() << endl
         << "Min long = " << numeric_limits<long>::min() << endl
         << "Max long = " << numeric_limits<long>::max() << endl
         << "Min float = " << numeric_limits<float>::min() << endl
         << "Max float = " << numeric_limits<float>::max() << endl
         << "Min double = " << numeric_limits<double>::min() << endl
         << "Max double = " << numeric_limits<double>::max() << endl
         << "Min long long = " << numeric_limits<long long>::min() << endl
         << "Max long long = " << numeric_limits<long long>::max() << endl
         << "Min long double = " << numeric_limits<long double>::min() << endl
         << "Max long double = " << numeric_limits<long double>::max() << endl << endl;
    int num1 = numeric_limits<int>::max() + 1;    // Overflow
    int num2 = numeric_limits<int>::min() - 1;    // Underflow
    cout << "2147483647 + 1 = " << num1 << endl
         << "-2147483648 - 1 = " << num2 << endl;
    return 0;
}