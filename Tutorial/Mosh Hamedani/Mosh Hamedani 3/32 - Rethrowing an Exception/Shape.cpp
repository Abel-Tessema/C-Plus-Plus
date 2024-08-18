#include "Shape.hpp"

#include <iostream>

using namespace std;

void Shape::draw() const {
    cout << "Drawing a Shape" << endl;
}

string Shape::getBackground() {
    return background;
}

void Shape::setBackground(string background) {
    this->background = background;
}