#include"problem1_interface file.h"
#include<stdio.h>
class
{
public:
    Complex(double a=0,double b=0)
    {
        realPart=a;
        imaginaryPart=b;
    }
    void print()
    {
        printf("(%lf,%lf)",realPart,imaginaryPart);
    }
    void multiply(Complex a,Complex b)
    {
        imaginaryPart=a.imaginaryPart*b.realPart
            +a.realPart*b.imaginaryPart;
        realPart=a.realPart*b.realPart
             -a.imaginaryPart*b.imaginaryPart;
    }
    void divide(Complex a,Complex b)
    {
        imaginaryPart=a.imaginaryPart/b.imaginaryPart;
        realPart=(a.realPart*b.realPart+a.imaginaryPart*b.imaginaryPart)
             /(b.realPart*b.realPart+b.imaginaryPart*b.imaginaryPart)
             +(a.imaginaryPart*b.realPart-a.realPart*b.imaginaryPart)
             /(b.realPart*b.realPart+b.imaginaryPart*b.imaginaryPart);
    }
private:
    double realPart;
    double imaginaryPart;
};
