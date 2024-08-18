#include <iostream>
using namespace std;

int main() {
    int numbers[] = { 10, 20, 30 };
    int* ptr = &numbers[sizeof(numbers) / sizeof(int) - 1];
    while (ptr >= numbers) {
        cout << *ptr << endl;
        ptr--;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int numbers[] = { 10, 20, 30 };
//     int sizeOfNumbers = sizeof(numbers) / sizeof(int);
//     int* ptr = &numbers[sizeOfNumbers - 1];
//     cout << *ptr << endl;

//     while (sizeOfNumbers - 1 >= 0) {
//         cout << numbers[sizeOfNumbers - 1] << endl;
//         sizeOfNumbers--;
//     }

//     return 0;
// }