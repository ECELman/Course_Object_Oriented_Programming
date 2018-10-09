#include"FixedDeposit.h"
#include<iostream>
using namespace std;

// To initialize the static data member annualInterestRate to 0.
float FixedDeposit::annualInterestRate=0;

// default constructor
FixedDeposit::FixedDeposit(float fixed_deposit)
{
    set_fixedBalance(fixed_deposit);
}

// set fixedBalance
void FixedDeposit::set_fixedBalance(float temp_fixed_deposit)
{
    fixedBalance=temp_fixed_deposit;
}
// get fixedBalance
float FixedDeposit::get_fixedBalance()
{
    return fixedBalance;
}

// set annualInterestRate
void FixedDeposit::set_annualInterestRate(float temp_interest_rate)
{
    annualInterestRate=temp_interest_rate;
}
// get annualInterestRate
float FixedDeposit::get_annualInterestRate()
{
    return annualInterestRate;
}

// calculate six monthly interest
void FixedDeposit::calculateSixMonthlyInterest()
{
    fixedBalance+=get_fixedBalance()*get_annualInterestRate()/2;
}

// modify the interest Rate
void FixedDeposit::modifyInterestRate(float new_value)
{
    set_annualInterestRate(new_value);
}
