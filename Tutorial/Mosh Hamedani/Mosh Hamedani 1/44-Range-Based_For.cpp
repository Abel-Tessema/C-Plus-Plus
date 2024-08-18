#include <iostream>
using namespace std;

int main() {
    int numbers[] = { 1, 2, 3, 4 };
    int sizeOfArray = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < sizeOfArray; i++) { cout << numbers[i] << endl; }
    cout << endl;
    for (int number: numbers) { cout << number << endl; }
    cout << endl;
    string name = "Bela Jash";
    for (char ch: name) { cout << ch << endl; }
    return 0;
}