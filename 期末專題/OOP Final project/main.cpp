#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

#include "BaseRestaurant.h"
#include "Rest_Taipei.h"
#include "Rest_Taichung.h"
#include "Rest_Tainan.h"

using namespace std;

void gotoxy(int, int);
int DynamicSelection(void);

int main()
{
	system("color F0");
    cout << "Welcome to HAHA restaurant" << endl;
    cout << "Please enter your account:";
    
    string account;
    cin >> account;

    int rest_id;
    BaseRestaurant* city;
    Rest_Taipei Taipei(account);
    Rest_Taichung Taichung(account);
    Rest_Tainan Tainan(account);
    
    system("cls");
    cout << "Hello! " << account << endl
         << "Please enter restaurant options:" << endl
         << "->(1)Taipei\n  (2)Taichung\n  (3)Tainan\n  (4)Quit" << endl;
	
	
	rest_id = DynamicSelection() - 1;
    system("cls");
    switch (rest_id)
    {
        case 1:
           	city = &Taipei;
            break;
        case 2:
           	city = &Taichung;
            break;
        case 3:
            city = &Tainan;
            break;
		case 4:
			system("cls");
    		cout << "Byebye!" << endl;
    }

	if(rest_id==1 || rest_id==2 || rest_id==3)
    {
        city -> menu();
        cout << "Please check your order in file. Thanks for your patronage." << endl << endl;
    }

    system("pause");
    return 0;
}

//-----

void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}

int DynamicSelection()
{
	int key;
	int x = 0;
	int select = 2;
	while(true)
    {
        key = getch();
        switch(key)
        {
            case 80:	// down
	            if(select < 5)
	            {
	                gotoxy(x, select);
					cout << "  ";
					select++;
					gotoxy(x, select);
					cout << "->";
				}
	            break;

            case 72:	// up
                if(select > 2)
                {
                    gotoxy(x, select);
                    cout << "  ";
                    select--;
                    gotoxy(x, select);
                    cout << "->";
                }
                break;

            case 13:	// enter
				return select;
            }
		}
    }
