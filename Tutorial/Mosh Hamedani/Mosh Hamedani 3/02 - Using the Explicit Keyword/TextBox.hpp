#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP
#include <string>

using namespace std;

class TextBox {
public:
    TextBox() = default;
    explicit TextBox(const string& value);
    string getValue();
    void setValue(const string& value);
private:
    string value;
};

#endif