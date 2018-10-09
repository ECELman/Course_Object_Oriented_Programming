#include<iostream>

//宣告一個 dimensionTwo 的名稱空間，並宣告一個函式叫做print
namespace dimensionTwo
{
    void print()
    {
        std::cout<<"This is dimensionTwo."<<std::endl;
    }
}

//使用 dimensionTwo 整個名稱空間
using namespace dimensionTwo;

//宣告一個 dimensionThree 的名稱空間，並宣告一個函式叫做print
namespace dimensionThree
{
    void print()
    {
        std::cout<<"This is dimensionThree."<<std::endl;
    }
}

int main()
{
    print();//使用using namespace 的方式來呼叫print函式

    dimensionThree::print();//使用範疇解析運算子(::)來呼叫print函式
    return 0;
}
