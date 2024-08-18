#ifndef TEST_CLASS
#define TEST_CLASS

#include <string>
using namespace std;

class TextBox {
public:
    TextBox() = default;
    explicit TextBox(string& value);
    string getValue();
    void setValue(string& value);
private:
    string value;
};

#endif