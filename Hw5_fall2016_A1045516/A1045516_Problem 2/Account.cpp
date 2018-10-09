#include "Account.h"
#include <iostream>
using namespace std;

// Account constructor to initialize the account balance,and check whether the value is valid
Account::Account(double initial_balance)
{
    if(initial_balance < 0.0)
    {
        setBalance(0.0);
        cout << "The initial balance " << initial_balance
             << " was invalid." << endl;
    }
    else setBalance(initial_balance);
}

// set balance
void Account::setBalance(double initial_balance)
{
    balance = initial_balance;
}

// get balance
double Account::getBalance() const
{
    return balance;
}

// add an amount to the balance
void Account::credit(double amount)
{
    balance += amount;
}

// withdraw the amount from the balance,and check whether the amount is not over the balance
void Account::debit(double amount)
{
    if(amount > balance) cout << "Debit amount exceeded account balance." << endl;
    else balance -= amount;
}
