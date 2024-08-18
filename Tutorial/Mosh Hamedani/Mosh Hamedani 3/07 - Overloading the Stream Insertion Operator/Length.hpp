#ifndef LENGTH_HPP
#define LENGTH_HPP

#include <ostream>

using namespace std;

class Length {
public:
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
private:
    int value;
};

ostream& operator<<(ostream& stream, Length& length);

#endif