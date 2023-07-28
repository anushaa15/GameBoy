#include <iostream>
#include <conio.h>
#include <direct.h>
#include <windows.h>
#include <time.h>
 
using namespace std;
 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
 
void gotoxy(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
 
void setcursor(bool visible, DWORD size)
{
    if (size == 0)
        size = 20;
 
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
}


void scrollprint()
{
   
gotoxy(23, 3);
cout << "                .-.---------------------------------.-. ";
gotoxy(23, 4);
cout << "               ((o))                                   ) ";
gotoxy(23, 5);
cout << "                \\U/_______          _____         ____/";
gotoxy(23, 6);
cout << "                   |                                  |";
gotoxy(23, 7);
cout << "                   |                                  |    ";
gotoxy(23, 8);
cout << "                   |                                  |    ";
gotoxy(23, 9);
cout << "                   |                                  |    ";
gotoxy(23, 10);
cout << "                   |    20  AAKASH LOBO - 215037      |    ";
gotoxy(23, 11);
cout << "                   |                                  |   ";
gotoxy(23, 12);
cout << "                   |                                  |   ";
gotoxy(23, 13);
cout << "                   |                                  |    ";
gotoxy(23, 14);
cout << "                   |    36 SANIA SALVAY - 215055      |    ";
gotoxy(23, 15);
cout << "                   |                                  |    ";
gotoxy(23, 16);
cout << "                   |                                  | ";
gotoxy(23, 17);
cout << "                   |                                  |  ";
gotoxy(23, 18);
cout << "                   |    48 ANUSHA SAINI - 215071      |   ";
gotoxy(23, 19);
cout << "                   |                                  |    ";
gotoxy(23, 20);
cout << "                   |                                  |    ";
gotoxy(23, 21);
cout << "                   |                                  |    ";
gotoxy(23, 22);
cout << "                   |                                  |   ";
gotoxy(23, 23);
cout << "                   |____    _______    __  ____    ___|   ";
gotoxy(23, 24);
cout << "                 /A\\                                  \\  ";
gotoxy(23, 25);
cout << "                ((o))                                  )    ";
gotoxy(23, 26);
cout << "                 '-'----------------------------------'    ";
}


int main()
{


    setcursor(0, 0);
    srand((unsigned)time(NULL));
    scrollprint();
    getche();
    return 0;
}



