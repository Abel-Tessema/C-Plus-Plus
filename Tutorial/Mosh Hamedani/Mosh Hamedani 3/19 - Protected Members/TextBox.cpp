#include "TextBox.hpp"
#include <string>

using namespace std;

TextBox::TextBox(const string& value) : value{value} {
    this->width;    // Accessible in derived classes because it's 'protected'
    this.enabled;   // Not accessible because it's 'private'
}

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this->value = value;
}