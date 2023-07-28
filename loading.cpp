#include <iostream>
#include <conio.h>
#include <windows.h>
#include <dos.h>


using namespace std;


int main()
{
    system("cls");
    for (int i = 1; i <= 50; i++)
    {
        system("cls");
        cout << "\n\n\t                     Loading " << 2 * i << "%\n\t      ";
        for (int j = 1; j <= i; j++)
        {
            cout << "\xB2";
        }
        if (i > 1 && i < 20)
        {
            cout << "\n\n\tCreating Temporary Files";
        }
        else if (i > 20 && i < 40)
        {
            cout << "\n\n\tAccessing Main Memory";
        }
        else if (i > 40 && i < 48)
        {
            cout << "\n\n\tAccessing Cache";
        }
        else
        {
            cout << "\n\n\tComplete. Press Enter to Continue ";
        }
        Sleep(150 - i * 3);
    }
    getch();
    return 0;
}



