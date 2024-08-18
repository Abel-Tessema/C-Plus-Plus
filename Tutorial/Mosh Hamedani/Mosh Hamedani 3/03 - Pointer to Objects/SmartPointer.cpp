#include "SmartPointer.hpp"

SmartPointer::SmartPointer(int* ptr) {
    setPtr(ptr);
}

SmartPointer::~SmartPointer() {
    delete ptr;
    ptr = nullptr;
}

int *SmartPointer::getPtr() {
    return ptr;
}

void SmartPointer::setPtr(int *ptr) {
    this->ptr = ptr;
}
