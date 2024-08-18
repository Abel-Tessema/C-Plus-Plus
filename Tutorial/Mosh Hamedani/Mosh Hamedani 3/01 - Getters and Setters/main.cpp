#include <iostream>
#include "TextBox.hpp"

using namespace std;

int main() {
    TextBox textbox;
    textbox.setString("Sasha Sloan - Someone You Hate");
    cout << textbox.getString() << endl;
    
    return 0;
}