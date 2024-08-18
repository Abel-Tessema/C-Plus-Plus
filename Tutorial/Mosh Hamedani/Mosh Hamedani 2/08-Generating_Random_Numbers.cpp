#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    const short minValue = 1;
    const short maxValue = 6;
    short die = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << die << endl;

    return 0;
}