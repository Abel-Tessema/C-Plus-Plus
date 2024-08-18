#include "Length.hpp"
// #include <compare>

Length::Length(int value) : value{value} {}

bool Length::operator==(const Length& other) const {
    return (value == other.value);
}

bool Length::operator==(const int other) const {
    return (value == other);
}

strong_ordering 