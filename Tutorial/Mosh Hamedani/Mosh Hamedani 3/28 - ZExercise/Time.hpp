#ifndef TIME_HPP
#define TIME_HPP

class Time {
public:
    Time(int hour, int minute, int second);
    int getHour();
    int getMinute();
    int getSecond();
private:
    int hour;
    int minute;
    int second;
};

#endif