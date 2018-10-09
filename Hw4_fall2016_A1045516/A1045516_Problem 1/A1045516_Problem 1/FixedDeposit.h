#ifndef FIXEDDEPOSIT_H_INCLUDED
#define FIXEDDEPOSIT_H_INCLUDED

class FixedDeposit
{
public:
    FixedDeposit(float); // default constructor
    void set_fixedBalance(float); // set fixedBalance
    float get_fixedBalance(); // get fixedBalance
    static void set_annualInterestRate(float); // set annualInterestRate
    float get_annualInterestRate(); // get annualInterestRate
    void calculateSixMonthlyInterest();
    static void modifyInterestRate(float);
private:
    static float annualInterestRate;
    float fixedBalance;
};

#endif // FIXEDDEPOSIT_H_INCLUDED
