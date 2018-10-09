#include<iostream>
#include<cstdlib>
using namespace std;

void swap1( int* a, int* b);
void swap2( int& a, int& b);

int main()
{
    int a = 1;
    int b = 2;

    cout << "a=" << a << "; b=" << b << endl;// Output : a=1; b=2

    // swap by pointer
    swap1(&a,&b);
    cout << "a=" << a << "; b=" << b << endl;// Swap a and b. Output : a=2; b=1

    // swap by reference
    swap2(a,b);
    cout << "a=" << a << "; b=" << b << endl;// Swap a and b. Output : a=1; b=2

    system("pause");
    return 0;
}

void swap1( int* a, int* b){
    int temp=*a,temp2=*b;
    *a=temp2;
    *b=temp;
}
void swap2( int& a, int& b){
    int tmp=b;
    b=a;
    a=tmp;
}
