#include "Widget.hpp"

#include <iostream>

using namespace std;

Widget::~Widget() {
    cout << "Widget destructed" << endl;
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
