#include<iostream>
#include"FixedDeposit.h"
using namespace std;

int main()
{
    FixedDeposit depositor1(10000.00),depositor2(60000.00);

    // calculate the first six months
    cout<<"First six months : "<<endl<<endl;

    depositor1.modifyInterestRate(0.09);
    depositor1.calculateSixMonthlyInterest();
    cout<<"depositor1 : "<<depositor1.get_fixedBalance()<<endl;

    depositor2.calculateSixMonthlyInterest();
    cout<<"depositor2 : "<<depositor2.get_fixedBalance()<<endl;

    // calculate the next six months
    cout<<endl<<"Next six months : "<<endl<<endl;

    depositor1.modifyInterestRate(0.1);
    depositor1.calculateSixMonthlyInterest();
    cout<<"depositor1 : "<<depositor1.get_fixedBalance()<<endl;

    depositor2.calculateSixMonthlyInterest();
    cout<<"depositor2 : "<<depositor2.get_fixedBalance()<<endl;

    return 0;
}

