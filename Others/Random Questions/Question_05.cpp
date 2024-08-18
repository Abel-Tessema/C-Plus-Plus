#include <iostream>

using namespace std;

unsigned short numberOfNums() {
    unsigned short size;
    cout << "Input the number of numbers you want to enter: ";
    cin >> size;
    return size;
}

void readNumbers(float numbers[], unsigned short size) {
    cout << "Enter the " << size << " numbers: ";
    for (short i = 0; i < size; i++)
        cin >> numbers[i];
}

void product(const float numbers[], unsigned short size) {
    float finalProduct = 1;
    for (short i = 0; i < size; i++)
        finalProduct *= numbers[i];
    cout << "Product: " << finalProduct << endl;
}

int main() {
    unsigned short size = numberOfNums();
    float numbers[size];
    readNumbers(numbers, size);
    product(numbers, size);

    return 0;
}