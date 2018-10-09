#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED

#include "Account.h"

class CheckingAccount : public Account
{
public:
    CheckingAccount(double,double); // constructor
    void setFee(double); // set the fee charged per transaction
    double getFee() const; // get the fee charged per transaction
    void credit(double); // add an amount to the balance,and cost the transaction fee
    void debit(double); // withdraw the amount from the balance,and cost the transaction fee
private:
    double fee; // transaction fee
};

#endif // CHECKINGACCOUNT_H_INCLUDED
