#include <iostream>

using namespace std;

template<typename T>

T larger(T first, T second) {
    return (first > second) ? first : second;
}

int main() {
    // auto result = larger(5.5, 10);
    auto result = larger<double>(5.5, 10);

    return 0;
}