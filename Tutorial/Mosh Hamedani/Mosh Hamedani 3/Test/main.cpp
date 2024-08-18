#include "TestClass.cpp"

#include <iostream>

using namespace std;

int main() {
    // TextBox box{"Yahallo!"};
    string str = "Yahallo!";
    // string str = "Yahallo! I am Yui Yuigahama.";
    TextBox box{str};
    cout << box.getValue() << endl;

    return 0;
}