#ifndef LENGTH_HPP
#define LENGTH_HPP

#include <iostream>

using namespace std;

class Length {
public:
    Length() = default;
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(const int other) const;
    bool operator!=(const int other) const;
    bool operator<(const int other) const;
    bool operator<=(const int other) const;
    bool operator>(const int other) const;
    bool operator>=(const int other) const;
    void setValue(int value);
    int getValue();
    friend ostream& operator<<(ostream& stream, Length& length);
private:
    int value;
    int privateValue;
};

ostream& operator<<(ostream& stream, Length& length);
istream& operator>>(istream& stream, Length& length);


#endif