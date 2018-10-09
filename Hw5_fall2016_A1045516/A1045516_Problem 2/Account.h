#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account
{
public:
    Account(double); // constructor
    void setBalance(double); // set balance
    double getBalance() const; // get balance
    void credit(double); // add an amount to the balance
    void debit(double); // withdraw the amount from the balance
protected:
    double balance;
};

#endif // ACCOUNT_H_INCLUDED
