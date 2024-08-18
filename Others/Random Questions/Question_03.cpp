#include <iostream>

using namespace std;

void readList(float myList[], unsigned short size) {
    for (short i = 0; i < size; i++)
        cin >> myList[i];
}

float findMax(const float myList[], unsigned short size) {
    float max = myList[0];
    for (short i = 0; i < size; i++)
        if (max < myList[i])
            max = myList[i];
    return max;
}

float findMin(const float myList[], unsigned short size) {
    float min = myList[0];
    for (short i = 0; i < size; i++)
        if (min > myList[i])
            min = myList[i];
    return min;
}

float findRange(const float myList[], unsigned short size) {
    return (findMax(myList, size) - findMin(myList, size));
}

float findMean(const float myList[], unsigned short size) {
    float totalMark = 0;
    for (short i = 0; i < size; i++)
        totalMark += myList[i];
    return totalMark / size;
}

void display(const float myList[], unsigned short size) {
    cout << "Max: " << findMax(myList, size) << endl;
    cout << "Min: " << findMin(myList, size) << endl;
    cout << "Range: " << findRange(myList, size) << endl;
    cout << "Mean: " << findMean(myList, size) << endl;
}

int main() {
    unsigned short size;
    cout << "Enter how many marks you want to enter: ";
    cin >> size;
    float markList[size];
    cout << "Enter the marks: ";
    readList(markList, size);
    display(markList, size);

    return 0;
}