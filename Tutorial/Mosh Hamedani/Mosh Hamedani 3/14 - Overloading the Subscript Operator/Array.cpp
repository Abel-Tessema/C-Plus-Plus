#include "Array.hpp"

#include <stdexcept>

Array::Array(size_t size) {
    values = new int[size];
    this->size = size;
}

Array::~Array() {
    delete[] values;
}

int& Array::operator[](size_t index) {
    if (index >= size)
        throw std::invalid_argument("index");
    return values[index];
}