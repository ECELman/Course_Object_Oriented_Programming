#include<iomanip>
#include<iostream>
#include"IntegerSet.h"
using namespace std;

int main()
{
    // To use default constructor initializing the set.
    IntegerSet set1, set2;
    cout<<setfill('-')<<setw(100)<<"-"<<endl;
    cout<<"The set1 and set2 are initialized by default constructor."<<endl;
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    // To check the original state for set1 and set2.
    cout<<"The set1 and set2 original state are :"<<endl;
    cout<<"set1 : ";
    set1.printSet();
    cout<<"set2 : ";
    set2.printSet();
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    /* To insert element into the set1,and to check the element whether over the range 0 to 100.
       If the element value is over the range 0 to 100,it will not be added into the set1. */
    cout<<"Following elements will be inserted into the set1 :"<<endl<<endl;
    set1.insertElement(5);
    set1.insertElement(101);
    set1.insertElement(28);
    set1.insertElement(51);
    set1.insertElement(200);
    cout<<endl<<"After adding,the elements in the set1 :"<<endl<<endl;
    set1.printSet(); // To print the element which is in the set2.
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    /* To insert element into the set2,and to check the element whether over the range 0 to 100.
       If the element value is over the range 0 to 100,it will not be added into the set2. */
    cout<<"Following elements will be inserted into the set2 :"<<endl<<endl;
    set2.insertElement(8);
    set2.insertElement(51);
    set2.insertElement(28);
    set2.insertElement(10);
    set2.insertElement(1000);
    cout<<endl<<"After adding,the elements in the set2 :"<<endl<<endl;
    set2.printSet(); // to print the element which is in the set2.
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    // To test the member function isEqualTo,intersectionOfSets and unionOfSets.
    set1.isEqualTo(set1,set2); // test member function isEqualTo
    cout<<endl<<"The elements which are intersection of set1 and set2 :"<<endl<<endl;
    set1.intersectionOfSets(set1,set2); // test member function intersectionOfSets
    cout<<endl<<"The elements which are union of set1 and set2 :"<<endl<<endl;
    set1.unionOfSets(set1,set2); // test member function unionOfSets
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    // To test the member function deleteElement,if the element doesn't exist in the set,it will print the error.
    cout<<"Following elements will be deleted from the set1 :"<<endl<<endl;
    set1.deleteElement(100);
    set1.deleteElement(5);
    set1.deleteElement(44);
    set1.deleteElement(2);
    set1.deleteElement(-13);
    cout<<endl<<"After deleting,the elements in the set1 :"<<endl<<endl;
    set1.printSet(); // To print the element which is in the set1.
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    // To test the member function deleteElement,if the element doesn't exist in the set,it will print the error.
    cout<<"Following elements will be deleted from the set2 :"<<endl<<endl;
    set2.deleteElement(39);
    set2.deleteElement(1000);
    set2.deleteElement(10);
    set2.deleteElement(8);
    cout<<endl<<"After deleting,the elements in the set2 :"<<endl<<endl;
    set2.printSet(); // To print the element which is in the set2.
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    // To test the member function isEqualTo,intersectionOfSets and unionOfSets/
    cout<<"After deleting,the set1 and set2 now state are :"<<endl<<endl;
    set1.isEqualTo(set1,set2); // test member function isEqualTo
    cout<<endl<<"The elements which are intersection of set1 and set2 :"<<endl<<endl;
    set1.intersectionOfSets(set1,set2); // test member function intersectionOfSets
    cout<<endl<<"The elements which are union of set1 and set2 :"<<endl<<endl;
    set1.unionOfSets(set1,set2); // test member function unionOfSets
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    // To use the additional constructor initializing the set/
    cout<<"The set3 are initialized by additional constructor."<<endl;
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    int element[10] = {77,81,1,-1,53,100,0,145,-39,20};
    cout<<"Following elements will be inserted into the set3 :"<<endl<<endl;
    IntegerSet set3(element,10);
    cout<<endl<<"After adding,the elements in the set3:"<<endl<<endl;
    set3.printSet(); // To print the element which is in the set3.
    cout<<setfill('-')<<setw(100)<<"-"<<endl;

    return 0;
}
