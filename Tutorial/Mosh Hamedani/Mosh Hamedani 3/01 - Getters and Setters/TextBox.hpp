#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <iostream>

using namespace std;

class TextBox {
    public:
        string getString();
        void setString(const string& str);
    private:
        string str;
};

#endif // TEXTBOX