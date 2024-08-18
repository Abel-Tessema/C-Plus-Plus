#include <iostream>
using namespace std;

int main() {
    int temperatures[] { 20, 40, 60, 80 };
    int totalTemp = 0;
    for (int temperature: temperatures)
        totalTemp += temperature;
    int sizeOfArray = sizeof(temperatures) / sizeof(int);
    double averageTemp = static_cast<double>(totalTemp) / sizeOfArray;

    cout << "Average temperature: " << averageTemp << endl;

    return 0;
}