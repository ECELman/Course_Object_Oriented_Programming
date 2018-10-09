#include"Time.h"

int main()
{
    Time time;

    for(int i=0;i<86401;i++)
    {
        time.tick();
        time.printStandard();
    }

    return 0;
}
