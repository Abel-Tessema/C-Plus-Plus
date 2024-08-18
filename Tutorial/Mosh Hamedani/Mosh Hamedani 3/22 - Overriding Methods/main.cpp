#include <iostream>
#include "TextBox.cpp"
#include "Widget.cpp"

using namespace std;

void showWidget(Widget& widget) {
    widget.draw();
}

int main() {
    TextBox box;
    box.draw();
    showWidget(box);

    return 0;
}