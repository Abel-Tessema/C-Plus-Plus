#ifndef DATE_HPP
#define DATE_HPP

class Date {
public:
    Date(int year, int month, int day);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
private:
    int year;
    int month;
    int day;
};

#endif