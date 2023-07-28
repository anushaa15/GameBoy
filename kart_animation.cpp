#include <iostream>
#include <conio.h>
#include <direct.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>




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


void line()
{
   
    gotoxy(20, 14);
    cout << "               ___________________________________________________";
}


void image1()
{
    gotoxy(35,12);
    cout << "  O";
    gotoxy(35,13);
    cout << " /|\\";
    gotoxy(35,14);
    cout << " / \\";
}


void image2()
{
    gotoxy(35,12);
    cout << " \\O/";
    gotoxy(35,13);
    cout << "  |";
    gotoxy(35,14);
    cout << " / \\";
}


void image3()
{
    gotoxy(39,12);
    cout << " _ O";
    gotoxy(39,13);
    cout << "  /\\";
    gotoxy(39,14);
    cout << " | \\";
}


void image4()
{
    gotoxy(46,12);
    cout << "   ";
    gotoxy(46,13);
    cout << " __\\O";
    gotoxy(46,14);
    cout << "/) |";
}




void image5()
{
    gotoxy(51,12);
    cout << " __|  ";
    gotoxy(51,13);
    cout << "   \\O";
    gotoxy(51,14);
    cout << "   ( \\";
}


void image6()
{
    gotoxy(58,12);
    cout << " \\ /  ";
    gotoxy(58,13);
    cout << "  | ";
    gotoxy(58,14);
    cout << " /O\\";
}


void image7()
{
    gotoxy(63,12);
    cout << "   |__";
    gotoxy(63,13);
    cout << "  O/ ";
    gotoxy(63,14);
    cout << " / ) ";
}


void image8()
{
    gotoxy(69,12);
    cout << "     ";
    gotoxy(69,13);
    cout << "  O/__";
    gotoxy(69,14);
    cout << "   | (\\";
}


void image9()
{
    gotoxy(77,12);
    cout << " O _  ";
    gotoxy(77,13);
    cout << " /\\  ";
    gotoxy(77,14);
    cout << " / | ";
}


void image10()
{
    gotoxy(82,12);
    cout << " \\O/";
    gotoxy(82,13);
    cout << "  |";
    gotoxy(82,14);
    cout << " / \\";
}


void image11()
{
    gotoxy(82,12);
    cout << "  O";
    gotoxy(82,13);
    cout << " /|\\";
    gotoxy(82,14);
    cout << " / \\";
}


void loading_animation()
{
    setcursor(0, 0);
    srand((unsigned)time(NULL));
    line();
    image1();
    Sleep(300);
    system("cls");
    line();
    image2();
    Sleep(300);
    system("cls");
    line();
    image3();
    Sleep(300);
    system("cls");
    line();
    image4();
    Sleep(300);
    system("cls");
    line();
    image5();
    Sleep(300);
    system("cls");
    line();
    image6();
    Sleep(300);
    system("cls");
    line();
    image7();
    Sleep(300);
    system("cls");
    line();
    image8();
    Sleep(300);
    system("cls");
    line();
    image9();
    Sleep(300);
    system("cls");
    line();
    image10();
    Sleep(300);
    system("cls");
    line();
    image11();
    Sleep(300);
    system("cls");
    line();
    image10();
    Sleep(300);
    system("cls");
    line();
    image9();
    Sleep(300);
    system("cls");
    line();
    image8();
    Sleep(300);
    system("cls");
    line();
    image7();
    Sleep(300);
    system("cls");
    line();
    image6();
    Sleep(300);
    system("cls");
    line();
    image5();
    Sleep(300);
    system("cls");
    line();
    image4();
    Sleep(300);
    system("cls");
    line();
    image3();
    Sleep(300);
    system("cls");
    line();
    image2();
    Sleep(300);
    system("cls");
    line();
    image1();
    Sleep(300);
    system("cls");
    line();
   
}
int main()
{
    bool run = true;
    while(run){
        loading_animation();
    }
    return 0;
}



