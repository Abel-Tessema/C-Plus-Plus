#include "TextBox.hpp"
#include <string>

using namespace std;

TextBox::~TextBox() {
    cout << "TextBox destructed" << endl;
}

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this->value = value;
}