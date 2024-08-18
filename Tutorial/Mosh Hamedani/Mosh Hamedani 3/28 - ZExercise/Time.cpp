#include "Time.hpp"

#include <stdexcept>

using namespace std;

Time::Time(int hour, int minute, int second) {
    if (!(hour >= 0 && hour <= 23))
        throw invalid_argument("hour");
    this->hour = hour;

    if (!(minute >= 0 && minute <= 59))
        throw invalid_argument("minute");
    this->minute = minute;
    
    if (!(second >= 0 && second <= 59))
        throw invalid_argument("second");
    this->second = second;
}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

int Time::getSecond() {
    return second;
}
