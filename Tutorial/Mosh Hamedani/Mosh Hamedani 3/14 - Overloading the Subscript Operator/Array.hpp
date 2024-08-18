#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>

class Array {
public:
    explicit Array(size_t size);
    ~Array();
    int& operator[](size_t index);
private:
    int* values;
    size_t size;
};

#endif