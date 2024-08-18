#ifndef PAIR_HPP
#define PAIR_HPP

#include <ostream>

using namespace std;

template<typename K, typename V>
class Pair {
public:
    Pair() = default;
    Pair(K key, V value);
    K getKey() const;
    V getValue() const;
    // ostream& operator<<(const ostream& stream);
private:
    K key;
    V value;
};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value) : key{key}, value{value} {}

template <typename K, typename V>
K Pair<K, V>::getKey() const {
    return key;
}

template <typename K, typename V>
V Pair<K, V>::getValue() const {
    return value;
}

#endif

template <typename K, typename V>
ostream& operator<<(ostream& stream, Pair<K, V>& pair) {
    // TODO: insert return statement here
    stream << pair.getKey() << " = " << pair.getValue();
    return stream;
}