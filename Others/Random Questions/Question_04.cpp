#include <iostream>

using namespace std;

double getProduct(int num1, double num2);

int main() {
    int firstNum = -10;
    double secondNum = 2.5;
    double product = getProduct(firstNum, secondNum);

    return 0;
}

double getProduct(int num1, double num2) {
    return num1 * num2;
}
