#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    // long elapsedSeconds = time(nullptr);
    // srand(elapsedSeconds);
    srand(time(nullptr));
    int number = rand() % 10;
    // cout << number << endl;
    // cout << elapsedSeconds << endl;
    cout << number << endl;

    return 0;

}