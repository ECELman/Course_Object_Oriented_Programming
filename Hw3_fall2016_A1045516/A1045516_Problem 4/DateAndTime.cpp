#include<iostream>
#include<iomanip>
#include"DateAndTime.h"
using namespace std;

// DateAndTime constructor
DateAndTime::DateAndTime(int hr, int min, int sec, int d, int m, int y)
{
    // to perform error checking
    if(m<=12) month = m;
    else month = 1;
    if(d<=31) day = d;
    else day = 1;
    year = y;
    setTime(hr, min, sec);
}

// to increment the day by one
void DateAndTime::nextDay()
{
    day++;
    int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(day==29 && month==2 && (year%400==0 || (year%4==0 && year%100!=0)))
    {
        day=29;
    }
    else
    {
        if(day>mon[month-1])
        {
            month++;
            day=1;
        }
        if(month>12)
        {
            year++;
            month=1;
        }
    }
}

// print Date in the format mm/dd/yyyy
void DateAndTime::print()
{
    cout << month << '/' << day << '/' << year << " ";
} // end function print

// set new Time value using universal time; ensure that
// the data remains consistent by setting invalid values to zero
void DateAndTime::setTime( int h, int m, int s )
{
    setHour( h ); // set private field hour
    setMinute( m ); // set private field minute
    setSecond( s ); // set private field second
} // end function setTime

// set hour value
void DateAndTime::setHour( int h )
{
    hour = ( h >= 0 && h < 24 ) ? h : 0; // validate hour
} // end function setHour

// set minute value
void DateAndTime::setMinute( int m )
{
    minute = ( m >= 0 && m < 60 ) ? m : 0; // validate minute
} // end function setMinute

// set second value
void DateAndTime::setSecond( int s )
{
    second = ( s >= 0 && s < 60 ) ? s : 0; // validate second
} // end function setSecond

// return hour value
int DateAndTime::getHour()
{
    return hour;
} // end function getHour

// return minute value
int DateAndTime::getMinute()
{
    return minute;
} // end function getMinute

// return second value
int DateAndTime::getSecond()
{
    return second;
} // end function getSecond

// to increment the time stored in a Time object by one second
void DateAndTime::tick()
{
    second++;
    if(second==60) minute++;
    if(minute==60) hour++;
    if(hour==24) nextDay();
    setSecond(second);
    setMinute(minute);
    setHour(hour);
}

// print Time in universal-time format (HH:MM:SS)
void DateAndTime::printUniversal()
{
    print();
    cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
       << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond()<<endl;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void DateAndTime::printStandard()
{
    print();
    cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
       << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
       << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" )<<endl;
} // end function printStandard
