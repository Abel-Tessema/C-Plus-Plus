#include <iostream>
using namespace std;

int main() {
    double totalTemp = 0;
    double averageTemp;
    double temps[] = { 10, 20, 30, 40, 50, 60 };
    int sizeOfArray = sizeof(temps) / sizeof(double);
    for (double eachTemp: temps) { totalTemp += eachTemp; }
    averageTemp = totalTemp / sizeOfArray;
    cout << "Average temperature = " << averageTemp << endl;

    return 0;
}