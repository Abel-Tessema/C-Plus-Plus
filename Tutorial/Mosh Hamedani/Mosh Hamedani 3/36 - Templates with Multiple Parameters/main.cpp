#include <iostream>

using namespace std;

template<typename T>
T larger(T first, T second) {
    return (first > second) ? first : second;
}

template<typename K, typename V>
void display(K key, V value) {
    cout << key << " = " << value << endl;
}

int main() {
    display("key", 1);
    display(1, 1);

    return 0;
}