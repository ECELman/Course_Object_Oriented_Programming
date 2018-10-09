#ifndef Rest_Taichung_h
#define Rest_Taichung_h

#include "BaseRestaurant.h"
using namespace std;

class Rest_Taichung : public BaseRestaurant
{
public:
    Rest_Taichung(string);
    void menu(void);
    void gotoxy(int, int);
    void list(string);
    void order(void);
    void file(void);
    ~Rest_Taichung();
    
private:
    string product_name[6];
    int product_price[6];
    int product_amount[6];
};

#endif
