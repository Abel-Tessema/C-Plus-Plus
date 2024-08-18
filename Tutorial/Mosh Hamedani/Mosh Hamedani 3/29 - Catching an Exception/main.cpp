#include "Rectangle.cpp"
#include "Triangle.cpp"

#include <iostream>

using namespace std;

int main() {
    Rectangle rect;
    
    try {
        cout << "Width: ";
        int width;
        cin >> width;
        rect.setWidth(width);
        rect.setLength(-5);
    }
    catch (const invalid_argument& ex) {
        cout << ex.what() << endl;
    }

    cout << "End of program" << endl;

    return 0;
}