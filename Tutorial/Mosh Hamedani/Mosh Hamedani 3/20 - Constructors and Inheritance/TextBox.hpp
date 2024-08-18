#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include "Widget.cpp"

#include <string>

using namespace std;

class TextBox : public Widget {
public:
    using Widget::Widget;
    ~TextBox();
    string getValue();
    void setValue(const string& value);
private:
    string value;
};

#endif