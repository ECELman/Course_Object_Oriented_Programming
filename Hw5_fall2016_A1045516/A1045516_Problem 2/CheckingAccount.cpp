#include <iostream>
#include "CheckingAccount.h"
using namespace std;

// CheckingAccount constructor,to initialize the interest rate and the balance
CheckingAccount::CheckingAccount(double initial_balance,double transaction_fee) : Account(initial_balance)
{
    setFee(transaction_fee);
}

// set the fee charged per transaction
void CheckingAccount::setFee(double transaction_fee)
{
    fee = transaction_fee;
}

// get the fee charged per transaction
double CheckingAccount::getFee() const
{
    return fee;
}

// redefine the function credit of Account class in the CheckingAccount class
void CheckingAccount::credit(double amount)
{
    balance += amount;
    balance -= fee;
}

// redefine the function debit of Account class in the CheckingAccount class
void CheckingAccount::debit(double amount)
{
    if(amount > balance) cout << "Debit amount exceeded account balance." << endl;
    else
    {
        balance -= amount;
        balance -= fee;
    }
}
