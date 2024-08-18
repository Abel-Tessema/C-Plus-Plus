#include <iostream>
#include "TextBox.cpp"

using namespace std;

void showBox(TextBox box) {

}

int main() {
    TextBox box;
    box.disable();
    cout << boolalpha << box.isEnabled() << endl;

    return 0;
}