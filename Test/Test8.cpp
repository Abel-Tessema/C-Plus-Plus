#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 7 , 7};
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(numbers) / sizeof(int); j++) {
            if (numbers[i] == numbers[j]) {
        }
    }

    return 0;
}