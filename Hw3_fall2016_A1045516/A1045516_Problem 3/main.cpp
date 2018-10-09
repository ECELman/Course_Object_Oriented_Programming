#include"Date.h"

int main()
{
    // to perform error checking
    Date date1(14,50,2020);
    cout<<"to perform error checking : "<<endl<<endl
        <<"the orign date is 14/50/2020"<<endl<<endl
        <<"after error checking,the date is becoming: "<<endl<<endl;
    date1.print();
    cout<<"-------------------------------------------------------"<<endl;

    Date date2;
    for(int i=0;i<1890;i++)
    {
        if(i!=0) date2.nextDay();
        date2.print();
    }

    return 0;
}
