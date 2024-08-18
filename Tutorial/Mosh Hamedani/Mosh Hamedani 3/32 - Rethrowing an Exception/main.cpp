#include "Rectangle.cpp"

#include <iostream>

using namespace std;

void createRectangle() {
    try {
        Rectangle rect;
        rect.setWidth(-1);
    }
    catch (const invalid_argument& ex) {
        cout << "Close the file" << endl;
        throw;
    }
}

void doWork() {
    createRectangle();
}

int main() {
    try {
        doWork();
    }
    catch (const exception& ex) {
        cout << ex.what() << endl;
    }

    return 0;
}