#ifndef Rest_Taipei_h
#define Rest_Taipei_h

#include "BaseRestaurant.h"
using namespace std;

class Rest_Taipei : public BaseRestaurant
{
public:
    Rest_Taipei(string);
    void menu(void);
    void gotoxy(int, int);
    void list(string);
    void order(void);
    void file(void);
    ~Rest_Taipei();
    
private:
    string product_name[9];
    int product_price[9];
    int product_amount[9];
};

#endif
