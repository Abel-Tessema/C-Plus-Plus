#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include "Widget.hpp"

#include <string>

using namespace std;

class TextBox : public Widget {
public:
    ~TextBox();
    using Widget::Widget;
    // void draw() const override;     // If not overridden, it'll inherit the pure virtual method from 'Widget', and it becomes abstract as well, rendering it unusable.
    string getValue();
    void setValue(const string& value);
private:
    string value;
};

#endif