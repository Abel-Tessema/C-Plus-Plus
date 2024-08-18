#ifndef LENGTH_HPP
#define LENGTH_HPP

// #include <compare>

using namespace std;

class Length {
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(const int other) const;
    // strong_ordering operator<=>(const int other) const;
private:
    int value;
};

#endif