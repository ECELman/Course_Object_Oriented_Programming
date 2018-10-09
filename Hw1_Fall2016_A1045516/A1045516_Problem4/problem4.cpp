#include<iostream>
using namespace std;

//宣告一個 template 並且其名稱為 T
template <typename T>

//利用 template 來去宣告一個函式叫 product
T product(T num1,T num2)
{
    return num1*num2;
}

int main()
{
    int integer1=5,integer2=20;
    cout<<"The two integer numbers : "<<endl<<endl<<"integer1 = "<<integer1<<endl
        <<"integer2 = "<<integer2<<endl<<endl;
    cout<<"The product of the two integers = "<<product(integer1,integer2)
        <<endl<<endl;//傳入正整數

    float float1=17.9f,float2=18.8f;
    cout<<"The two floating-point numbers : "<<endl<<endl<<"float1 = "<<float1<<endl
        <<"float2 = "<<float2<<endl<<endl;
    cout<<"The product of the two floating-point numbers = "<<product(float1,float2)
        <<endl;//傳入小數

    return 0;
}
