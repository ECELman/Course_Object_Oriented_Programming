#include"Rational.h"
#include<iostream>
#include<iomanip>
using namespace std;

// to initialize the array of numerator and the array of denominator
Rational::Rational(int num1,int den1,int num2,int den2)
{
    set_numerator(num1,num2);
    set_denominator(den1,den2);
}

// destructor
Rational::~Rational(){}

// to set the array of numerator
void Rational::set_numerator(int num1,int num2)
{
    numerator[0]=num1;
    numerator[1]=num2;
}
// to get the array of numerator
int Rational::get_numerator(int site)
{
    return numerator[site];
}

// to set the array of denominator
void Rational::set_denominator(int den1,int den2)
{
    denominator[0]=den1;
    denominator[1]=den2;
}
// to get the array of denominator
int Rational::get_denominator(int site)
{
    return denominator[site];
}

// store the rational number in reduced form
void Rational::reduced_form(int num,int den,int mode)
{
    int big=num;

    if(num<den) big=den;

    int divide=0;
    for(int j=1;j<=big;j++)
    {
        if(num%j==0 && den%j==0) divide=j;
    }

    if(divide!=0)
    {
        num/=divide;
        den/=divide;
    }

    // checking mode
    if(mode!=5 && mode!=6)
    {
        print_rational_orign(num,den,mode);
        print_rational_floating_point(num,den,mode);
    }
    else
    {
        if(mode==5)
        {
            cout<<setfill(' ')<<setw(54)<<num<<endl
                <<"Rational number 1 in reduced form and in a/b format: -"<<endl
                <<setfill(' ')<<setw(54)<<den<<endl<<endl
                <<"Rational number 1 in reduced form and in floating - point format: "
                <<(float)num/den<<endl<<endl;
        }
        if(mode==6)
        {
            cout<<setfill(' ')<<setw(54)<<num<<endl
                <<"Rational number 2 in reduced form and in a/b format: -"<<endl
                <<setfill(' ')<<setw(54)<<den<<endl<<endl
                <<"Rational number 2 in reduced form and in floating - point format: "
                <<(float)num/den<<endl<<endl<<endl;
        }
    }

}

// print the rational numbers in a/b format
void Rational::print_rational_orign(int num,int den,int mode)
{
    static int time=0;
    //choose the print mode
    if(time==0)
    {
        cout<<"The two Rational numbers are : "<<endl<<endl
            <<setfill(' ')<<setw(21)<<numerator[0]<<endl
            <<"Rational number 1 : -"<<endl
            <<setfill(' ')<<setw(21)<<denominator[0]<<endl;
            reduced_form(numerator[0],denominator[0],5);
        cout<<setfill(' ')<<setw(21)<<numerator[1]<<endl
            <<"Rational number 2 : -"<<endl
            <<setfill(' ')<<setw(21)<<denominator[1]<<endl;
            reduced_form(numerator[1],denominator[1],6);

        time++;
    }

    if(mode==1)
    {
        cout<<"(a) Adding two Rational numbers : "<<endl<<endl
            <<numerator[0]<<"   "<<numerator[1]<<"   "<<num<<endl
            <<"-"<<" + "<<"-"<<" = "<<"-"<<"  (in the form a/b)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<"   "<<den<<endl<<endl;
    }
    if(mode==2)
    {
        cout<<"(b) Subtracting two Rational numbers : "<<endl<<endl
            <<numerator[0]<<"   "<<numerator[1]<<"   "<<num<<endl
            <<"-"<<" - "<<"-"<<" = "<<"--"<<"  (in the form a/b)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<"   "<<den<<endl<<endl;
    }
    if(mode==3)
    {
        cout<<"(c) Multiplying two Rational numbers : "<<endl<<endl
            <<numerator[0]<<"   "<<numerator[1]<<"   "<<num<<endl
            <<"-"<<" * "<<"-"<<" = "<<"-"<<"  (in the form a/b)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<"   "<<den<<endl<<endl;
    }
    if(mode==4)
    {
        cout<<"(d) Dividing two Rational numbers : "<<endl<<endl
            <<numerator[0]<<"   "<<numerator[1]<<"   "<<num<<endl
            <<"-"<<" / "<<"-"<<" = "<<"-"<<"  (in the form a/b)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<"   "<<den<<endl<<endl;
    }
}

// print the rational numbers in floating point format
void Rational::print_rational_floating_point(int num,int den,int mode)
{
    //choose the print mode
    if(mode==1)
    {
        cout<<numerator[0]<<"   "<<numerator[1]<<endl
            <<"-"<<" + "<<"-"<<" = "<<(float)num/den
            <<"  (in floating - point format)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<endl<<endl;
    }
    if(mode==2)
    {
        cout<<numerator[0]<<"   "<<numerator[1]<<endl
            <<"-"<<" - "<<"-"<<" = "<<(float)num/den
            <<"  (in floating - point format)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<endl<<endl;
    }
    if(mode==3)
    {
        cout<<numerator[0]<<"   "<<numerator[1]<<endl
            <<"-"<<" * "<<"-"<<" = "<<(float)num/den
            <<"  (in floating - point format)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<endl<<endl;
    }
    if(mode==4)
    {
        cout<<numerator[0]<<"   "<<numerator[1]<<endl
            <<"-"<<" / "<<"-"<<" = "<<(float)num/den
            <<"  (in floating - point format)"<<endl
            <<denominator[0]<<"   "<<denominator[1]<<endl<<endl;
    }
}

// add two rational numbers
void Rational::add()
{
    int numerator_temp,denominator_temp,mode=1;
    numerator_temp=numerator[0]*denominator[1]+numerator[1]*denominator[0];
    denominator_temp=denominator[0]*denominator[1];
    reduced_form(numerator_temp,denominator_temp,mode);
}
// subtract two rational numbers
void Rational::subtract()
{
    int numerator_temp,denominator_temp,mode=2;
    numerator_temp=numerator[0]*denominator[1]-numerator[1]*denominator[0];
    denominator_temp=denominator[0]*denominator[1];
    reduced_form(numerator_temp,denominator_temp,mode);
}
// multiply two rational numbers
void Rational::multiply()
{
    int numerator_temp,denominator_temp,mode=3;
    numerator_temp=numerator[0]*numerator[1];
    denominator_temp=denominator[0]*denominator[1];
    reduced_form(numerator_temp,denominator_temp,mode);
}
// divide two rational numbers
void Rational::divide()
{
    int numerator_temp,denominator_temp,mode=4;
    numerator_temp=numerator[0]*denominator[1];
    denominator_temp=denominator[0]*numerator[1];
    reduced_form(numerator_temp,denominator_temp,mode);
}
