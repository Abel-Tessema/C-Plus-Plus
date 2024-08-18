#ifndef PAIR_HPP
#define PAIR_HPP

template<typename K, typename V>
class Pair {
public:
    Pair(K key, V value);
    K getKey() const;
    V getValue() const;
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