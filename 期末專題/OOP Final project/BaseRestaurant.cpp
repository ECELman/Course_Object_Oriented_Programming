#include <iostream>
#include <fstream>
#include "BaseRestaurant.h"
using namespace std;

BaseRestaurant::BaseRestaurant()
{
    f_order.open("order.txt",ios::out);
}

BaseRestaurant::~BaseRestaurant()
{
    f_order.close();
}
