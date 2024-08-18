#include "TextBox.cpp"
#include "CheckBox.cpp"
#include "Widget.cpp"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

void showWidget(Widget& widget) {
    widget.draw();
}

int main() {
    vector<unique_ptr<Widget>> widgets;
    widgets.push_back(make_unique<TextBox>());
    widgets.push_back(make_unique<CheckBox>());

    Widget widget;
    TextBox box;

    for (const auto& widget: widgets)
        widget->draw();

    return 0;
}