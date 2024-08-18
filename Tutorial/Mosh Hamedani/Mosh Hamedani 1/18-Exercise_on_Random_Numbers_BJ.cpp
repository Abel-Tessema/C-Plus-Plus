#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(nullptr));
    int number = rand() % 6 + 1;
    
    cout << number << endl;

    return 0;

}