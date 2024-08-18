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
    }
    // catch (const invalid_argument& ex) {
    //     cout << ex.what() << endl;
    // }
    // catch (const out_of_range& ex) {
    //     cout << ex.what() << endl;
    // }
    catch (const out_of_range& ex) {    // Specific exception
        cout << ex.what() << endl;
    }
    catch (const logic_error& ex) {     // General exception
        cout << ex.what() << endl;
    }

    return 0;
}