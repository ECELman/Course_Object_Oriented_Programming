#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED

#include "Account.h"

class SavingsAccount : public Account
{
public:
    SavingsAccount(double,double); // constructor
    void setInterest(double); // set interest rate
    double getInterest() const; // get interest rate
    double calculateInterest(); // return the interest
private:
    double interest_rate;
};

#endif // SAVINGSACCOUNT_H_INCLUDED
