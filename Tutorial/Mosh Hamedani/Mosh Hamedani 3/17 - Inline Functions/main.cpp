#include <iostream>
#include "Length.cpp"

using namespace std;

int main() {
    Length length{10};
    // int x = length;      // This one's possible without the 'explicit' keyword in the header file.
    // int x = int(length); // This works too for the conversion.
    int x = static_cast<int>(length);
    cout << x << endl;    

    return 0;
}