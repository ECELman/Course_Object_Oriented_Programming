#ifndef INTEGERSET_H_INCLUDED
#define INTEGERSET_H_INCLUDED
#include<vector>
using namespace std;

class IntegerSet
{
public:
    IntegerSet(); // default constructor
    void unionOfSets(IntegerSet,IntegerSet); // set operation of union
    void intersectionOfSets(IntegerSet,IntegerSet); // set operation of intersection
    void insertElement(int); // add new elements
    void deleteElement(int); // delete existing elements
    void printSet(); // print the elements in the set
    void isEqualTo(IntegerSet,IntegerSet); // to compare whether two sets are equal
    IntegerSet(int [],int); // additional constructor
private:
    vector <bool> element; // vector of bool values
};

#endif // INTEGERSET_H_INCLUDED
