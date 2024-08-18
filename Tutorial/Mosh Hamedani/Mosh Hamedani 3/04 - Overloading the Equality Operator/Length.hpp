#ifndef LENGTH_HPP
#define LENGTH_HPP

class Length {
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(const int other) const;
    bool operator!=(const int other) const;
private:
    int value;
};

#endif