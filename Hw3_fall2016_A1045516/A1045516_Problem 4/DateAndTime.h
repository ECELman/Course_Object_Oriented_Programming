#ifndef DATEANDTIME_H_INCLUDED
#define DATEANDTIME_H_INCLUDED

class DateAndTime
{
public:
    DateAndTime( int =0, int =0, int =0, int =1, int =1, int =2000 ); // default constructor

    void nextDay(); // to increment the day by one
    void print(); // print the month / day / year

    // set functions
    void setTime( int, int, int); // set hour, minute, second
    void setHour( int ); // set hour (after validation)
    void setMinute( int ); // set minute (after validation)
    void setSecond( int ); // set second (after validation)

    //get functions
    int getHour(); // return hour
    int getMinute(); // return minute
    int getSecond(); // return second

    void tick(); // to increment the time stored in a Time object by one second
    void printUniversal(); // output time in universal-time format
    void printStandard(); // output time in standard-time format
private:
    int hour; // 0 - 23 (24-hour clock format)
    int minute; // 0-59
    int second; // 0-59

    int month;
    int day;
    int year;
};

#endif // DATEANDTIME_H_INCLUDED
