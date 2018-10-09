#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include "Rest_taipei.h"

using namespace std;

Rest_Taipei::Rest_Taipei(string account)
{
    f_menu.open("menu_Taipei.txt", ios::in);
    if (!f_menu.is_open())
    {
        cout << "ERROR!";
        exit(1);
    }
    f_order << "To " << account << "," << endl;
}

void Rest_Taipei::menu()
{
    string s;
    cout << "Here is the Taipei's restaurant menu:" << endl;
    cout << "Use arrow keys to order and add amount, enter the\"Summit\" to end." << endl;
    cout << "\tmenu\t\t\tprize\tamount" << endl;
    cout << "->";
	bool index = false;
    while(getline(f_menu,s))
    {
    	if(index)
			cout << "  ";
        cout << s << endl;
        list(s);
        index = true;
    }
    cout << "  Summit!";
    //---
    int x = 44;
	for(int i=3; i<12; i++)
	{
   		gotoxy(x, i);
   		cout << "0" << endl;
	}
	order();
}

void Rest_Taipei::gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}

void Rest_Taipei::list(string s)
{
    static int index = 0;
    product_price[index] = ((s[33]-48)*10+(s[34]-48));
    int tmp;
    for(int i=0; i<s.length(); i++)
        if(s[i]==' ' && s[i+1]=='N')
        {
            tmp = i;
            break;
        }
    for(int i=3; i<tmp; i++)
        product_name[index] += s[i];
    
    index++;
}

void Rest_Taipei::order()
{
    int key;//getchar
    int sx = 0;
	int nx = 44;
    memset(product_amount, 0x00, sizeof(product_amount));
    int pointer = 3;
    bool flag = true;
    while(flag)
    {
        key = getch();
        switch(key)
        {
            case 80:	// down
	            if(pointer < 12)
	            {
	                gotoxy(sx, pointer);
					cout << "  ";
					pointer++;
					gotoxy(sx, pointer);
					cout << "->";
				}
	            break;

            case 72:	// up
                if(pointer > 3)
                {
                    gotoxy(sx, pointer);
                    cout << "  ";
                    pointer--;
                    gotoxy(sx, pointer);
                    cout << "->";
                }
                break;

            case 75:	// left
	            if(pointer != 12)
	        	{
	        		if(product_amount[pointer-3] == 0)
	                	product_amount[pointer-3] = 9;
					else
						product_amount[pointer-3]--;
	                gotoxy(nx, pointer);
	                cout << product_amount[pointer-3];
	    		}
	        	break;
	        	
            case 77:	// right
                if(pointer != 12)
                {
                	if(product_amount[pointer-3] == 9)
						product_amount[pointer-3] = 0;
					else
                    	product_amount[pointer-3]++;
                    gotoxy(nx, pointer);
                    cout << product_amount[pointer-3];
                }
                break;
                
			case 13:    //enter
				if(pointer == 12)
				{
					flag = false;
					file();
				}
            }
    }
}

void Rest_Taipei::file()
{
	f_order << "Here is your order in Taipei's restaurant:" << endl << endl;

	int total = 0;
	int tmp = 0;
	for(int i=0; i<9; i++)
		if(product_amount[i] != 0)
		{
			tmp++;
			f_order << product_name[i] << "$";
			f_order << product_price[i] << "\t *";
			f_order << product_amount[i] << endl;
			total += product_amount[i]*product_price[i];
		}
	if(!tmp)
		f_order << "empty" << endl;
		
	f_order << endl << "Total:  $" << total << endl << "Thanks for your patronage.";
    cout << "Total: $" << total << endl;
}

Rest_Taipei::~Rest_Taipei()
{
    f_menu.close();
}
