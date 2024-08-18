#include <iostream>
using namespace std;

/*
double increasePrice(double price) {
    price *= 1.2;
    return price;
}
*/

/*
void increasePrice(double& price) {
    price *= 1.2;
}
*/

void greet(/*const*/ string& name) {
    cout << "Yahallo, " << name << "!" << endl;
    name = "Joshua";
}

int main() {
    /*
    double price = 100;
    price = increasePrice(price);
    cout << price << endl;
    */

    /*
    double price = 100;
    increasePrice(price);
    cout << price << endl;
    */
    string name1 = "Bela Jash";
    greet(name1);
    cout << name1 << endl;

    return 0;
}