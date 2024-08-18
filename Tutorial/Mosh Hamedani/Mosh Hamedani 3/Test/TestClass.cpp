#include "TestClass.hpp"
#include <iostream>

using namespace std;

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(string& value) {
    if (value.length() > 10) {
        cout << "Too many characters.\n";
        throw invalid_argument("value");
    }
    this->value = value;
}

TextBox::TextBox(string& value) {
    setValue(value);
    getValue();
}