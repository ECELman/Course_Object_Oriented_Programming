// Fig. 17.17: Date.h
// Date class Declaration. Member functions are defined in Date.cpp

// prevent multiple inclusions of header file
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

// class Date definition
class Date
{
public:
    Date( int = 1, int = 1, int = 2000 ); // default constructor
    void nextDay(); // to increment the day by one
    void print(); // print the month / day / year
private:
    int month;
    int day;
    int year;
}; // end class Date

#endif
