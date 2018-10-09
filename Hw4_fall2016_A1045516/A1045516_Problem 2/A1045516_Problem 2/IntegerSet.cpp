#include<iostream>
#include"IntegerSet.h"

// to use default constructor initializing the set
IntegerSet::IntegerSet()
{
    for(int i=0;i<101;i++) element.push_back(false);
}

// to find the two sets elements of union
void IntegerSet::unionOfSets(IntegerSet set1,IntegerSet set2)
{
    IntegerSet set3;
    vector<bool>::iterator set1_temp=set1.element.begin(),
                           set2_temp=set2.element.begin(),
                           set3_temp=set3.element.begin();

    for(;set1_temp<set1.element.end();set1_temp++,set2_temp++,set3_temp++)
    {
        if(*set1_temp==true || *set2_temp==true) *set3_temp=true;
    }

    set3.printSet();
}

// to find the two sets elements of intersection
void IntegerSet::intersectionOfSets(IntegerSet set1,IntegerSet set2)
{
    IntegerSet set3;
    vector<bool>::iterator set1_temp=set1.element.begin(),
                           set2_temp=set2.element.begin(),
                           set3_temp=set3.element.begin();

    for(;set1_temp<set1.element.end();set1_temp++,set2_temp++,set3_temp++)
    {
        if(*set1_temp==true && *set2_temp==true) *set3_temp=true;
    }

    set3.printSet();
}

// to add new elements into the set
void IntegerSet::insertElement(int add_element)
{
    if(add_element>100 || add_element<0)
    {
        cout<<"The new element "<<add_element<<" is over the range 0 to 100,so it isn't added."<<endl;
    }
    else
    {
        vector<bool>::iterator set_temp=element.begin();

        for(int i=0;i<add_element;i++) set_temp++;

        *set_temp=true;

        cout<<"The new element "<<add_element<<" is added."<<endl;
    }

}

// to delete the existing elements from the set
void IntegerSet::deleteElement(int delete_element)
{
    vector<bool>::iterator set_temp=element.begin();

    for(int i=0;i<delete_element;i++) set_temp++;

    if(*set_temp==false || *set_temp>100 || *set_temp<0) cout<<"The element "<<delete_element
                                                         <<" isn't exist in the set,so the deleting is fail."
                                                         <<endl;
    else
    {
        *set_temp=false;

        cout<<"The element "<<delete_element<<" is deleted."<<endl;
    }
}

// to print the elements in the set
void IntegerSet::printSet()
{
    vector<bool>::iterator set_temp=element.begin();
    int check=0;
    cout<<"element : ";
    for(int i=0;set_temp<element.end();i++,set_temp++)
    {
        if(*set_temp==1)
        {
            cout<<i<<" ";
            check=1;
        }
    }
    if(check==0) cout<<"--- (empty set)"<<endl;
    else cout<<endl;
}

// to compare whether the two sets are equal
void IntegerSet::isEqualTo(IntegerSet set1,IntegerSet set2)
{
    vector<bool>::iterator set1_temp=set1.element.begin(),
                           set2_temp=set2.element.begin();

    int check=0;

    for(;set1_temp<set1.element.end();set1_temp++,set2_temp++)
    {
        if(*set1_temp!=*set2_temp)
        {
            check=1;
            break;
        }
    }

    if(check==0) cout<<"The set1 and set2 are equal!"<<endl;
    else if(check==1) cout<<"The set1 and set2 aren't equal!"<<endl;
}

// to use additional constructor initializing the set
IntegerSet::IntegerSet(int array_temp[],int array_length)
{
    for(int i=0;i<101;i++) element.push_back(false);
    for(int i=0;i<array_length;i++) insertElement(array_temp[i]);
}
