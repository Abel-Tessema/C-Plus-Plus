#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include "Widget.hpp"

#include <string>

using namespace std;

class TextBox final : public Widget {
public:
    ~TextBox();
    using Widget::Widget;
    void draw() const override final;
    string getValue();
    void setValue(const string& value);
private:
    string value;
};

#endif