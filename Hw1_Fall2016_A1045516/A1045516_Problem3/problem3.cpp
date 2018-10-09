#include<iostream>
using namespace std;

/*�ŧi�@�Ө禡�s squarePerimeterByValue �åB�Q�� Pass By Value �ӥh���ܼ�
�A�N��P����4��*/
int squarePerimeterByValue(int side)
{
    return side*4;
}

/*�ŧi�@�Ө禡�s squarePerimeterByReference �åB�Q�� Pass By Reference �ӥh���ܼ�
�A�N��P����4��*/
void squarePerimeterByReference(int &side)
{
    side*=4;
}

int main()
{
    int side=5;
    cout<<"The side of square is "<<side<<endl<<endl;

    //Pass By Value
    cout<<"By squarePerimeterByValue function(Pass By Value) : ";
    cout<<squarePerimeterByValue(side)<<endl<<endl;

    //Pass By Reference
    squarePerimeterByReference(side);
    cout<<"By squarePerimeterByReference function(Pass By Reference) : ";
    cout<<side<<endl;

    return 0;
}
