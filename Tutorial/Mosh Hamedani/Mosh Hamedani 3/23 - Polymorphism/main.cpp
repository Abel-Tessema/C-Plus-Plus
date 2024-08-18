#include "TextBox.cpp"
#include "CheckBox.cpp"
#include "Widget.cpp"

#include <iostream>

using namespace std;

void showWidget(Widget& widget) {
    widget.draw();
}

int main() {
    TextBox box;
    showWidget(box);

    CheckBox checkBox;
    showWidget(checkBox);

    return 0;
}