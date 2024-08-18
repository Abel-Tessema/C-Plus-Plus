#include "Widget.hpp"

#include <iostream>

using namespace std;

void Widget::draw() const {
    cout << "Drawing a Widget" << endl;
}

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
