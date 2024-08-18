#include "Length.hpp"
#include <iostream>

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
    length.privateValue;    // It can access private members since it's a friend.
    stream << length.getValue();
    return stream;
}

istream& operator>>(istream& stream, Length& length) {
    int value;
    stream >> value;
    length.setValue(value);
    return stream;
}

Length Length::operator+(const Length& other) const {
    return Length{value + other.value};
}

Length& Length::operator+=(const Length& other) {
    value += other.value;
    return *this;
}

Length& Length::operator=(const Length& other) {
    value = other.value;
    return *this;
}