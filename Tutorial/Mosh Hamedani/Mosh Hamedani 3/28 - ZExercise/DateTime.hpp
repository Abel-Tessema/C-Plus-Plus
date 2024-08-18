#ifndef DATETIME_HPP
#define DATETIME_HPP

#include "Date.hpp"
#include "Time.hpp"

class DateTime : public Date, public Time {
public:
    DateTime(int year, int month, int day, int hour, int minute, int second);
};

#endif