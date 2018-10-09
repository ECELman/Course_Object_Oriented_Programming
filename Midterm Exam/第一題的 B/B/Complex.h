#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
public:
    Complex(double,double);
    void print();
    void multiply(Complex &,Complex &);
    void divide(Complex &,Complex &);
private:
    double realPart;
    double imaginaryPart;
};

#endif // COMPLEX_H_INCLUDED
