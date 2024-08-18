#include <iostream>

using namespace std;

class Vect
{
public:
    Vect(int size);
    ~Vect();
    Vect(const Vect& vect);

private:
    int *data;
    int size;
};

Vect::Vect(int size) : size{size}
{
    data = new int[size];
}

Vect::~Vect() {
    delete[] data;
}

Vect::Vect(const Vect &vect)
{
    delete[] data;
    size = vect.size;
    data = new int[size];
    for(int i  = 0; i < size; i++)
        data[i] = vect.data[i];
}

int main()
{
    Vect a{10};
    Vect b{a};

    return 0;
}