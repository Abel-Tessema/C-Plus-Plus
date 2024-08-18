#include <iostream>

using namespace std;

void selectionSort(int[], int);
void insertionSort(int*, int);

int main() {
    int numbers[] = { -29, 18, 1, 7, 18 };
    int size = sizeof(numbers) / sizeof(int);
    // selectionSort(numbers, size);
    insertionSort(numbers, size);
    for (int number : numbers)
        cout << number << endl;

    return 0;
}

void insertionSort(int array[], int size) {
    int temp;
    for (int i = 1; i < size; i++) {
        temp = array[i];
        for (int j = i; j > 0 && temp < array[j - 1]; j--) {
            array[j] = array[j - 1];
            array[j - 1] = temp;
        }
    }
}

void selectionSort(int array[], int size) {
    int temp;
    int smallest;
    for (int i = 0; i < size; i++) {
        smallest = i;
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[smallest])
                smallest = j;
        temp = array[smallest];
        array[smallest] = array[i];
        array[i] = temp;
    }
}