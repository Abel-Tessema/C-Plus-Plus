#include <iostream>
#include "TextBox.cpp"

using namespace std;

void showWidget(Widget widget) {
    // can only access members of the Widget class for the parameter even if a TextBox is passed as an argument
    // try writing 'widget.' then see the available members

}

int main() {
    Widget widget1;
    TextBox box1;
    Widget widget2 = box1;  // Upcasting (derived -> base)
    // TextBox box2 = widget1; // Downcasting (base -> derived) -> illegal
    showWidget(box1);       // Upcasting, to a function.
    // Since the function has Widget as its parameter, the 'string value' member of the TextBox is discarded when passed by value.
    // This is called object-slicing. 24 bytes of data (of 'string') is lost.
    // To prevent this, it can be passed by reference or pointer.
    // Even so, the members of the TextBox class are inaccessible in the function, since the parameter is Widget.

    return 0;
}