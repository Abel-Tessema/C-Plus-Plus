#ifndef SMARTPOINTER_HPP
#define SMARTPOINTER_HPP

class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
    int* getPtr();
    void setPtr(int* ptr);
    int& operator*();
private:
    int* ptr = nullptr;
};

#endif