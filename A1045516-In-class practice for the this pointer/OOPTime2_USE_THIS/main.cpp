#include<iostream>
#include"Time.h"
using namespace std;

int main()
{
    Time OOPTime2;
    OOPTime2.setHour(14).setMinute(10).setSecond(00); // use Fig. 18.15~18.17's codes,use this pointer
    cout<<"OOPTime2 uses Fig. 18.15~18.17's codes : ";
    OOPTime2.printStandard();

    return 0;
}
