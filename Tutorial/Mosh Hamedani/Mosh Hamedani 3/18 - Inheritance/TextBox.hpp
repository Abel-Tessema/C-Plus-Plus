#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include "Widget.cpp"

#include <string>

using namespace std;

class TextBox : public Widget {
public:
    TextBox() = default;
    explicit TextBox(const string& value);
    string getValue();
    void setValue(const string& value);
private:
    string value;
};

#endif