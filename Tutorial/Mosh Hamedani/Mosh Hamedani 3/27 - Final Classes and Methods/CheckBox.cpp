#include "CheckBox.hpp"

#include <iostream>

using namespace std;

CheckBox::~CheckBox() {
    cout << "Destructing a CheckBox" << endl;
}

void CheckBox::draw() const {
    cout << "Drawing a CheckBox" << endl;
}