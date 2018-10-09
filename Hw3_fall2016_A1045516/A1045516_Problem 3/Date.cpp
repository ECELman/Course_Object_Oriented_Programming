// Fig. 17.18: Date.cpp
// Date class Member-function definitions.

#include "Date.h" // include definition of class Date from Date.h

// Date constructor
Date::Date( int m, int d, int y )
{
    // to perform error checking
    if(m<=12) month = m;
    else month = 1;
    if(d<=31) day = d;
    else day = 1;
    year = y;
} // end constructor Date

// to increment the day by one
void Date::nextDay()
{
    day++;
    int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};

    //判斷該年是否是閏年，如果是，其二月的天數改成29
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
void Date::print()
{
    cout << month << '/' << day << '/' << year << endl;
} // end function print
