#include "TextBox.hpp"
#include <iostream>

using namespace std;

void TextBox::setString(const string& str) {
    if (str.length() < 10)
        throw invalid_argument("str");
    this->str = str;
}

string TextBox::getString() {
    return str;
}
