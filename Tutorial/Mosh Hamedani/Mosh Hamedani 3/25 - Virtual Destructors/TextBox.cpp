#include "TextBox.hpp"
#include <iostream>

using namespace std;

void TextBox::draw() const {
    cout << "Drawing a TextBox" << endl;
}

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this->value = value;
}

TextBox::~TextBox() {
    cout << "Destructing a TextBox" << endl;
}