#include <iostream>
using namespace std;

int numFinder(int numbers[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (numbers[i] == target)
            return i;
    return -1;
}

int main() {
    int numbers[] = { 1, 2, 4, 8, 16, 32 };
    int size = sizeof(numbers) / sizeof(int);
    int target = 16;

    int index = numFinder(numbers, size, target);
    cout << index << endl;
    
    return 0;
}