#include "Rectangle.hpp"

#include <stdexcept>

using namespace std;

void Rectangle::draw() const {
    cout << "Drawing a Rectangle" << endl;
}

void Rectangle::setLength(int length) {
    if (length <= 0)
        throw invalid_argument("The length cannot be negative!");
    this->length = length;
}
void Rectangle::setWidth(int width) {
    if (width <= 0)
        throw invalid_argument("The width cannot be negative!");
    if (width > 100)
        throw out_of_range("The width cannot be greater than 100!");
    this->width = width;
}
int Rectangle::getLength() const {
    return length;
}
int Rectangle::getWidth() const {
    return width;
}