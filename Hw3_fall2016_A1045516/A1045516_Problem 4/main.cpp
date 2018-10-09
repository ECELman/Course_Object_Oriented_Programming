#include"DateAndTime.h"

int main()
{
    DateAndTime test;

    for(int i=0;i<86401;i++)
    {
        if(i!=0) test.tick();
        test.printUniversal();
        test.printStandard();
    }

    return 0;
}
