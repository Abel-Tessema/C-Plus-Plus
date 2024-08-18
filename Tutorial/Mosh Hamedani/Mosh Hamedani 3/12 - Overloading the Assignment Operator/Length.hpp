#ifndef LENGTH_HPP
#define LENGTH_HPP

#include <iostream>

using namespace std;

class Length {
public:
    Length() = default;
    explicit Length(int value);
    // Length(const Length& length) = delete;   // Can't do copying this way

    bool operator==(const Length& other) const;
    bool operator==(const int other) const;
    bool operator!=(const int other) const;
    bool operator<(const int other) const;
    bool operator<=(const int other) const;
    bool operator>(const int other) const;
    bool operator>=(const int other) const;
    Length operator+(const Length& other) const;
    Length& operator+=(const Length& other);
    Length& operator=(const Length& other);     // = delete => Can't do assignment this way

    void setValue(int value);
    int getValue();
private:
    int value;
    int privateValue;
    friend ostream& operator<<(ostream& stream, Length& length);
};

ostream& operator<<(ostream& stream, Length& length);
istream& operator>>(istream& stream, Length& length);


#endif