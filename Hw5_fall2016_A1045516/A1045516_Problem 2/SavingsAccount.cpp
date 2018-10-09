#include "SavingsAccount.h"

// SavingsAccount constructor,to initialize the interest rate and the balance
SavingsAccount::SavingsAccount(double initial_balance,double initial_rate) : Account(initial_balance)
{
    setInterest(initial_rate);
}

// set interest rate
void SavingsAccount::setInterest(double initial_rate)
{
    interest_rate = initial_rate;
}

// get interest rate
double SavingsAccount::getInterest() const
{
    return interest_rate;
}

// return the interest
double SavingsAccount::calculateInterest()
{
    return balance * interest_rate;
}
