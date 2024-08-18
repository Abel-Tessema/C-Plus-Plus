#include "Length.hpp"
#include <ostream>

using namespace std;

Length::Length(int value) : value{value} {}

bool Length::operator==(const Length& other) const {
    return (value == other.value);
}

bool Length::operator==(const int other) const {
    return (value == other);
}

bool Length::operator!=(const int other) const {
    return !(value == other);
}

bool Length::operator<(const int other) const {
    return value < other;
}

bool Length::operator<=(const int other) const {
    return !(value > other);
}

bool Length::operator>(const int other) const {
    return value > other;
}

bool Length::operator>=(const int other) const {
    return !(value < other);
}

void Length::setValue(int value) {
    this->value = value;
}

int Length::getValue() {
    return value;
}

ostream& operator<<(ostream& stream, Length& length) {
    stream << length.getValue();
    return stream;
}