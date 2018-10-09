// Fig. 18.17: fig18_17.cpp
// Cascading member function calls with the this pointer.
#include <iostream>
#include "Time.h" // Time class definition
using namespace std;

int main()
{
    Time t; // create Time object

    // cascaded function calls
    t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );

    // output time in universal and standard formats
    t.printUniversal();
    cout<<endl;
    t.printStandard();

    return 0;
} // end main
