#include <iostream>
using namespace std;

void swapper(int numbers[], int i, int j) {
    int temp;
    temp = numbers[j];
    numbers[j] = numbers[i];
    numbers[i] = temp;
}

void arraySorter(int numbers[], int size) {
    for (int j = 0; j < size; j++)
        for (int i = 0; i < size; i++)
            if (numbers[i] > numbers[i + 1])
                swapper(numbers, i, i + 1);
}

int main() {
    int numbers[] = { 5, 4, 3, 2, 1, 10, 9, 8, 7, 6 };
    int size = sizeof(numbers) / sizeof(int);

    arraySorter(numbers, size);

    for (int number: numbers)
        cout << number << endl;

    return 0;
}