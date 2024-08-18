#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
         << left << setw(15) << "C++" << setw(10) << right << 100 << endl
         << left << setw(15) << "JavaScript" << setw(10) << right << 50 << endl;
    return 0;
}