#ifndef Rest_Tainan_h
#define Rest_Tainan_h

#include "BaseRestaurant.h"
using namespace std;

class Rest_Tainan : public BaseRestaurant
{
public:
    Rest_Tainan(string);
    void menu(void);
    void gotoxy(int, int);
    void list(string);
    void order(void);
    void file(void);
    ~Rest_Tainan();
    
private:
    string product_name[8];
    int product_price[8];
    int product_amount[8];
};

#endif
