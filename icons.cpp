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
 
void pressprint()
{
   
    gotoxy(4, 9);
    cout << " ___________________________   ___________________________   ___________________________";
    gotoxy(4, 10);
    cout << " |        _                 | |                           | |         ________          |        ";
    gotoxy(4, 11);
    cout << " |       (_)                | |   (```````)       (.v.)   | |        /mmmmmmmm\\         |        ";
    gotoxy(4, 12);
    cout << " |       _;_                | |(``        `)     /)( )(\\  | |    ~~~|mmmmmmmmm|         |    ";
    gotoxy(4, 13);
    cout << " |      / | \\   _^___^_     | | `(   )````(`)      ^ ^    | |       | o    o  |         |     ";
    gotoxy(4, 14);  
    cout << " |     /  |  \\/#######/-    | |   ```      ``             | |    ___ \\   V   /          |       ";
    gotoxy(4, 15);
    cout << " |     \\_ |_/  /#/          | |           @@              | |   (_______[]_|``|----|--  |       ";
    gotoxy(4, 16);
    cout << " |        |   /_/           | |          @@@@             | |        |    | ``          | ";
    gotoxy(4,17);
    cout << " |        |\\                | |        @@@@\\@@@           | |        |___  \\            |  ";
    gotoxy(4,18);
    cout << " |       /  \\               | |      @@@@/@@@@@           | |         |  ^  \\           |   ";
    gotoxy(4,19);
    cout << " |      /   |               | |       @@\\ ' /@@           | |         |  /\\  \\          | ";
    gotoxy(4,20);
    cout << " |      |_  \\_              | |          | |              | |         (__) \\  \\         |    ";
    gotoxy(4,21);
    cout << " |                          | |          | |              | |              (___)        |  ";      
    gotoxy(4,22);
    cout << " |__________________________| |___________________________| |___________________________|          ";
}
 
void pressclear()
{
    gotoxy(4, 9);
    cout << "                                                                                                                ";
    gotoxy(4, 10);
    cout << "                                                                                                              ";
    gotoxy(4, 11);
    cout << "                                                                                                              ";
    gotoxy(4, 12);
    cout << "                                                                                                              ";
    gotoxy(4, 13);
    cout << "                                                                                                              ";
    gotoxy(4, 14);
    cout << "                                                                                                              ";
    gotoxy(4, 15);
    cout << "                                                                                                              ";
    gotoxy(4, 16);
    cout << "                                                                                                              ";
}
 
void windows()
{
    gotoxy(4, 9);
    cout << ".-----------------. .-------------. .-------------.";
    gotoxy(4, 10);
    cout << "| ZOMBIE SURVIVAL | | FLAPPY BIRD | | NINJA CLIMB |";
    gotoxy(4, 11);
    cout << "'-----------------' '-------------' '-------------'";
}
 
int main()
{
    setcursor(0, 0);
    srand((unsigned)time(NULL));
    pressprint();
    getche();
    do
    {
        system("cls");
        windows();
        getche();
    } while (1);
 
    return 0;
}


