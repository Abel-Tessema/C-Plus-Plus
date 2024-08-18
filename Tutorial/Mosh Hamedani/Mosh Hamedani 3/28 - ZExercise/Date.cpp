#include "Date.hpp"

#include <stdexcept>

using namespace std;

Date::Date(int year, int month, int day) {
    if (!(year >=1900 && year <= 2050))
        throw invalid_argument("year");
    this->year = year;

    if (!(month >=1 && month <= 12))
        throw invalid_argument("month");
    this->month = month;

    if (!(day >=1 && day <= 31))
        throw invalid_argument("day");
    this->day = day;
}

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}