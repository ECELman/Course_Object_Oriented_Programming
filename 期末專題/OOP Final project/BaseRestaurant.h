#ifndef BaseRestaurant_h
#define BaseRestaurant_h
#include <fstream>
using namespace std;

class BaseRestaurant
{
public:
    BaseRestaurant();
    virtual void menu() = 0;
    void gotoxy(int, int);
    void list(string);
    void order(void);
    void file(void);
    ~BaseRestaurant();
protected:
    fstream f_menu;
    fstream f_order;
};

#endif
