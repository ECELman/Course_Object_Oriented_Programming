#include<iostream>

//�ŧi�@�� dimensionTwo ���W�٪Ŷ��A�ëŧi�@�Ө禡�s��print
namespace dimensionTwo
{
    void print()
    {
        std::cout<<"This is dimensionTwo."<<std::endl;
    }
}

//�ϥ� dimensionTwo ��ӦW�٪Ŷ�
using namespace dimensionTwo;

//�ŧi�@�� dimensionThree ���W�٪Ŷ��A�ëŧi�@�Ө禡�s��print
namespace dimensionThree
{
    void print()
    {
        std::cout<<"This is dimensionThree."<<std::endl;
    }
}

int main()
{
    print();//�ϥ�using namespace ���覡�өI�sprint�禡

    dimensionThree::print();//�ϥνdå�ѪR�B��l(::)�өI�sprint�禡
    return 0;
}
