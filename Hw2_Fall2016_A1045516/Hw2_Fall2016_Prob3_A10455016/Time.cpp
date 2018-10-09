#include<iostream>
#include"Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    set_hour(hour);
    set_minute(minute);
    set_second(second);
}

void Time::set_hour(int hours)
{
    hour = hours;
}
void Time::set_minute(int minutes)
{
    minute = minutes;
}
void Time::set_second(int seconds)
{
    second = seconds;
}

int Time::get_hour()
{
    return hour;
}
int Time::get_minute()
{
    return minute;
}
int Time::get_second()
{
    return second;
}

void Time::displayTime()
{
    if(hour<0 || hour>23)  hour=0;
    cout<<"The time is "<<hour<<":"<<minute<<":"<<second<<endl;
}

int main()
{
    Time time1(10,23,45);
    Time time2(30,54,23);
    time1.displayTime();
    time2.displayTime();
    return 0;
}
