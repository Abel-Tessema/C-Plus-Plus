#include "Widget.hpp"

#include <iostream>

using namespace std;

Widget::~Widget() {
    cout << "Destructing a Widget" << endl;
}

// void Widget::draw() const {
//     cout << "Drawing a Widget" << endl;
// }

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
