#include <iostream>

using namespace std;

void bubbleSort(int array[], int size);
void selectionSort(int array[], int size);
void insertionSort(int array[], int size);

void linearSearch(int array[], int size, int key);
void binarySearch(int array[], int size, int key);

int main() {
    int numbers[] = { 20, 17, 9, 14, 11, 8 };
    int size = sizeof(numbers) / sizeof(int);
    // bubbleSort(numbers, size);
    // selectionSort(numbers, size);
    insertionSort(numbers, size);

    for (int number : numbers)
        cout << number << endl;

    // linearSearch(numbers, size, 14);
    binarySearch(numbers, size, 18);

    int a = 1, b = 2;
    swap(a, b);
    cout << a << endl << b << endl;

    return 0;
}

void bubbleSort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

void selectionSort(int array[], int size) {
    int smallest;
    int temp;
    for (int i = 0; i < size; i++) {
        smallest = i;
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[smallest])
                smallest = j;
        temp = array[i];
        array[i] = array[smallest];
        array[smallest] = temp;
    }
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

void linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            cout << "Number found at index " << i << "." << endl;
            return;
        }

    }
    cout << "Number not found." << endl;
}

void binarySearch(int array[], int size, int key) {
    int low = 0;
    int high = size - 1;
    int middle;
    while (low <= high) {
        middle = (low + high) / 2;
        if (key == array[middle]) {
            cout << "Number found at index " << middle << "." << endl;
            return;
        }
        else if (key < array[middle])
            high = middle - 1;
        else
            low = middle + 1;
    }
    cout << "Number not found." << endl;
}