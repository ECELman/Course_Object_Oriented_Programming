#include<iostream>
using namespace std;

/*宣告一個函式叫 squarePerimeterByValue 並且利用 Pass By Value 來去傳變數
，將其周長乘4倍*/
int squarePerimeterByValue(int side)
{
    return side*4;
}

/*宣告一個函式叫 squarePerimeterByReference 並且利用 Pass By Reference 來去傳變數
，將其周長乘4倍*/
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
