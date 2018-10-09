#ifndef PROBLEM_1_INTERFACE_H_INCLUDED
#define PROBLEM_1_INTERFACE_H_INCLUDED

// declare a class which name is Rational
class Rational
{
public:
    Rational(int=1,int=1,int=1,int=1); // to initialize the array of numerator and the array of denominator
    ~Rational(); // destructor
    void set_numerator(int,int); // to set the array of numerator
    int get_numerator(int); // to get the array of numerator
    void set_denominator(int,int); // to set the array of denominator
    int get_denominator(int); // to get the array of denominator
    void reduced_form(int,int,int); // store the rational number in reduced form
    void add(); // add two rational numbers
    void subtract(); // subtract two rational numbers
    void multiply(); // multiply two rational numbers
    void divide(); // divide two rational numbers
    void print_rational_orign(int,int,int); // print the rational numbers in a/b format
    void print_rational_floating_point(int,int,int); // print the rational numbers in floating point format
private:
    int numerator[2]; // declare variable of numerator
    int denominator[2]; // declare variable of denominator
};

#endif // PROBLEM_1_INTERFACE_H_INCLUDED
