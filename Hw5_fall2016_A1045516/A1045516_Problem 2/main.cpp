#include <iostream>
#include <iomanip>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main()
{
    // test class Account
    cout << setfill('-') << setw(15) << " "
         << "test Account class" << " " <<  setfill('-')
         << setw(21) << " " << endl
         << setfill('-') << setw(20) << " "
         << "Account 1" << " " <<  setfill('-')
         << setw(25) << " " << endl;
    /* create an object from Account class,and test
       function setBalance and constructor */
    // Account 1
    cout << "The Account user is Eric." << endl << endl;
    Account Eric(23.59);
    // test the function getBalance of Account class
    cout << "Now Balance = " << Eric.getBalance() << endl;
    // test the function credit of Account class
    Eric.credit(100);
    cout << "Now 100 is added in the account." << endl
         << "Now Balance = " << Eric.getBalance() << endl;
    // test the function debit of Account class
    Eric.debit(50);
    cout << "Now 50 is withdrawn from the account." << endl
         << "Now Balance = " << Eric.getBalance() << endl;
    cout << "Try to withdraw 1020 from account." << endl;
    Eric.debit(1020);
    cout << "Now Balance = " << Eric.getBalance() << endl;

    // Account 2
    cout << setfill('-') << setw(20) << " "
         << "Account 2" << " " <<  setfill('-')
         << setw(25) << " " << endl;
    /* test the constructor of Account class whether determines
       the initial balance is valid */
    cout << "The Account user is Tom." << endl << endl;
    Account Tom(-20);
    cout <<  "Now Balance = " << Tom.getBalance() << endl;
    // test the function credit of Account class
    Tom.credit(1200.56);
    cout << "Now 1200.56 is added in the account." << endl
         << "Now Balance = " << Tom.getBalance() << endl;
    // test the function debit of Account class
    Tom.debit(1000);
    cout << "Now 1000 is withdrawn from the account." << endl
         << "Now Balance = " << Tom.getBalance() << endl;
    cout << "Try to withdraw 100000 from account." << endl;
    Eric.debit(100000);
    cout << "Now Balance = " << Tom.getBalance() << endl;

    // test class SavingsAccount
    cout << setfill('-') << setw(12) << " "
         << "test SavingsAccount class" << " " << setfill('-')
         << setw(17) << " " << endl
         << setfill('-') << setw(20) << " "
         << "Account 3" << " " <<  setfill('-')
         << setw(25) << " " << endl;
    // Account 3
    /* create an object from SavingsAccount class,and test
       function setBalance , constructor and function setInterest*/
    cout << "The Account user is Mary." << endl << endl;
    SavingsAccount Mary(1500,12.5);
    // test the function getBalance of Account class
    cout << "Now Balance = " << Mary.getBalance() << endl;
    // test the function credit of Account class
    Mary.credit(1789);
    cout << "Now 1789 is added in the account." << endl
         << "Now Balance = " << Mary.getBalance() << endl;
    // test the function debit of Account class
    Mary.debit(1500);
    cout << "Now 1500 is withdrawn from the account." << endl
         << "Now Balance = " << Mary.getBalance() << endl;
    cout << "Try to withdraw 2000 from account." << endl;
    Mary.debit(2000);
    cout << "Now Balance = " << Mary.getBalance() << endl;
    // test the function getInterest of SavingsAccount class
    cout << "The account's interest rate = " << Mary.getInterest() << endl;
    // test the function calculateInterest of SavingsAccount class
    cout << "The account's can get the interest = "
         << Mary.calculateInterest() << endl;
    // add interest into the account
    cout << "Now " << Mary.calculateInterest()
         << " is added in the account." << endl;
    Mary.credit(Mary.calculateInterest());
    cout << "Now Balance = " << Mary.getBalance() << endl;

    // Account 4
    cout << setfill('-') << setw(20) << " "
         << "Account 4" << " " <<  setfill('-')
         << setw(25) << " " << endl;
    /* test the constructor of Account class which is inherited
       by SavingsAccount class whether determines the initial balance is valid */
    cout << "The Account user is John." << endl << endl;
    SavingsAccount John(-1746,10);
    // test the function getBalance of Account class
    cout << "Now Balance = " << John.getBalance() << endl;
    // test the function credit of Account class
    John.credit(123456);
    cout << "Now 123456 is added in the account." << endl
         << "Now Balance = " << John.getBalance() << endl;
    // test the function debit of Account class
    John.debit(120000);
    cout << "Now 120000 is withdrawn from the account." << endl
         << "Now Balance = " << John.getBalance() << endl;
    cout << "Try to withdraw 1030000 from account." << endl;
    John.debit(1030000);
    cout << "Now Balance = " << John.getBalance() << endl;
    // test the function getInterest of SavingsAccount class
    cout << "The account's interest rate = " << John.getInterest() << endl;
    // test the function calculateInterest of SavingsAccount class
    cout << "The account's can get the interest = "
         << John.calculateInterest() << endl;
    // add interest into the account
    cout << "Now " << John.calculateInterest()
         << " is added in the account." << endl;
    John.credit(John.calculateInterest());
    cout << "Now Balance = " << John.getBalance() << endl;

    // test class CheckingAccount
    cout << setfill('-') << setw(12) << " "
         << "test CheckingAccount class" << " " << setfill('-')
         << setw(16) << " " << endl
         << setfill('-') << setw(20) << " "
         << "Account 5" << " " <<  setfill('-')
         << setw(25) << " " << endl;
    // Account 5
    /* create an object from CheckingAccount class,and test
       function setBalance , constructor and function setFee*/
    cout << "The Account user is Steven." << endl << endl;
    CheckingAccount Steven(2500,12);
    // test the function getFee of CheckingAccount class
    cout << "The account's transaction fee = " << Steven.getFee() << endl;
    // test the function getBalance of Account class
    cout << "Now Balance = " << Steven.getBalance() << endl;
    // test the function credit of CheckingAccount class
    Steven.credit(5689);
    cout << "Now 5689 is added in the account." << endl
         << "Now Balance = " << Steven.getBalance() << endl;
    // test the function debit of CheckingAccount class
    Steven.debit(5000);
    cout << "Now 5000 is withdrawn from the account." << endl
         << "Now Balance = " << Steven.getBalance() << endl;
    cout << "Try to withdraw 30000 from account." << endl;
    Steven.debit(30000);
    cout << "Now Balance = " << Steven.getBalance() << endl;

    // Account 6
    cout << setfill('-') << setw(20) << " "
         << "Account 6" << " " <<  setfill('-')
         << setw(25) << " " << endl;
    /* test the constructor of Account class which is inherited
       by CheckingAccount class determines whether the initial balance is valid */
    cout << "The Account user is Bob." << endl << endl;
    CheckingAccount Bob(-8000,23);
     // test the function getFee of CheckingAccount class
    cout << "The account's transaction fee = " << Bob.getFee() << endl;
    // test the function getBalance of Account class
    cout << "Now Balance = " << Bob.getBalance() << endl;
    // test the function credit of CheckingAccount class
    Bob.credit(6000);
    cout << "Now 6000 is added in the account." << endl
         << "Now Balance = " << Bob.getBalance() << endl;
    // test the function debit of CheckingAccount class
    Bob.debit(640);
    cout << "Now 640 is withdrawn from the account." << endl
         << "Now Balance = " << Bob.getBalance() << endl;
    cout << "Try to withdraw 138569 from account." << endl;
    Bob.debit(138569);
    cout << "Now Balance = " << Bob.getBalance() << endl;
    cout << setfill('-') << setw(55) << " " << endl;

    return 0;
}
