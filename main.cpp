#include <iostream>
#include <conio.h>
#include <direct.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define SCREEN_WIDTH 117
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 81 // MENU SIZE
#define MENU_WIDTH 20
#define GAP_SIZE 7
#define PIPE_DIF 45

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
    cout << "8888888b.  8888888b.  8888888888 .d8888b.   .d8888b.        .d8888b. 88888888888     d8888 8888888b. 88888888888 ";
    gotoxy(4, 10);
    cout << "888   Y88b 888   Y88b 888       d88P  Y88b d88P  Y88b      d88P  Y88b    888        d88888 888   Y88b    888  ";
    gotoxy(4, 11);
    cout << "888    888 888    888 888       Y88b.      Y88b.           Y88b.         888       d88P888 888    888    888  ";
    gotoxy(4, 12);
    cout << "888   d88P 888   d88P 8888888    \"Y888b.    \"Y888b.         \"Y888b.      888      d88P 888 888   d88P    888  ";
    gotoxy(4, 13);
    cout << "8888888P\"  8888888P\"  888           \"Y88b.     \"Y88b.          \"Y88b.    888     d88P  888 8888888P\"     888  ";
    gotoxy(4, 14);
    cout << "888        888 T88b   888             \"888       \"888            \"888    888    d88P   888 888 T88b      888  ";
    gotoxy(4, 15);
    cout << "888        888  T88b  888       Y88b  d88P Y88b  d88P      Y88b  d88P    888   d8888888888 888  T88b     888  ";
    gotoxy(4, 16);
    cout << "888        888   T88b 8888888888 \"Y8888P\"   \"Y8888P\"        \"Y8888P\"     888  d88P     888 888   T88b    888  ";
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
    for (int i = 0; i < SCREEN_HEIGHT + 2; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 1);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(4, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 2; i++)
    {
        gotoxy(2, i + 1);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 2);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 2);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 0);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    gotoxy(SCREEN_WIDTH / 2 - 48, 3);
    cout << ".d8888. d88888b db      d88888b  .o88b. d888888b       .d8b.        d888b   .d8b.  .88b  d88. d88888b ";
    gotoxy(SCREEN_WIDTH / 2 - 48, 4);
    cout << "88'  YP 88'     88      88'     d8P  Y8 `~~88~~'      d8' `8b      88' Y8b d8' `8b 88'YbdP`88 88'     ";
    gotoxy(SCREEN_WIDTH / 2 - 48, 5);
    cout << "`8bo.   88ooooo 88      88ooooo 8P         88         88ooo88      88      88ooo88 88  88  88 88ooooo ";
    gotoxy(SCREEN_WIDTH / 2 - 48, 6);
    cout << "  `Y8b. 88~~~~~ 88      88~~~~~ 8b         88         88~~~88      88  ooo 88~~~88 88  88  88 88~~~~~ ";
    gotoxy(SCREEN_WIDTH / 2 - 48, 7);
    cout << "db   8D 88.     88booo. 88.     Y8b  d8    88         88   88      88. ~8~ 88   88 88  88  88 88.     ";
    gotoxy(SCREEN_WIDTH / 2 - 48, 8);
    cout << "`8888Y' Y88888P Y88888P Y88888P  `Y88P'    YP         YP   YP       Y888P  YP   YP YP  YP  YP Y88888P ";

    gotoxy(5, 10);
    cout << "       __________________________        ___________________________        ___________________________";
    gotoxy(5, 11);
    cout << "      |        _                 |      |                           |      |         ________          |";
    gotoxy(5, 12);
    cout << "      |       (_)                |      |   (```````)       (.v.)   |      |        /mmmmmmmm\\         |";
    gotoxy(5, 13);
    cout << "      |       _;_                |      |(``        `)     /)( )(\\  |      |    ~~~|mmmmmmmmm|         |";
    gotoxy(5, 14);
    cout << "      |      / | \\   _^___^_     |      | `(   )````(`)      ^ ^    |      |       | o    o  |         |";
    gotoxy(5, 15);
    cout << "      |     /  |  \\/#######/-    |      |   ```      ``             |      |    ___ \\   V   /          |";
    gotoxy(5, 16);
    cout << "      |     \\_ |_/  /#/          |      |           @@              |      |   (_______[]_|``|----|--  |";
    gotoxy(5, 17);
    cout << "      |        |   /_/           |      |          @@@@             |      |        |    | ``          |";
    gotoxy(5, 18);
    cout << "      |        |\\                |      |        @@@@\\@@@           |      |        |___  \\            |";
    gotoxy(5, 19);
    cout << "      |       /  \\               |      |      @@@@/@@@@@           |      |         |  ^  \\           |";
    gotoxy(5, 20);
    cout << "      |      /   |               |      |       @@\\ ' /@@           |      |         |  /\\  \\          |";
    gotoxy(5, 21);
    cout << "      |      |_  \\_              |      |          | |              |      |         (__) \\  \\         |";
    gotoxy(5, 22);
    cout << "      |                          |      |          | |              |      |              (___)        |";
    gotoxy(5, 23);
    cout << "      |__________________________|      |___________________________|      |___________________________|";

    gotoxy(5, 24);
    cout << "          .-----------------.                  .-------------.                   .-------------.";
    gotoxy(5, 25);
    cout << "          | ZOMBIE SURVIVAL |                  | FLAPPY BIRD |                   | NINJA CLIMB |";
    gotoxy(5, 26);
    cout << "          '-----------------'                  '-------------'                   '-------------'";
}

// LOADING

int loadbar()
{
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(console, &info);

    system("cls");
    for (int i = 1; i <= 50; i++)
    {
        system("cls");

        /*for (int i = 0; i < SCREEN_HEIGHT; i++)
        {
            gotoxy(SCREEN_WIDTH, i + 2);
            cout << "|";
        }

        for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
        {
            gotoxy(4, i + 3);
            cout << "|";
        }

        for (int i = 0; i < SCREEN_HEIGHT; i++)
        {
            gotoxy(2, i + 2);
            cout << "|";
        }

        for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
        {
            gotoxy(SCREEN_WIDTH - 2, i + 3);
            cout << "|";
        }

        for (int i = 5; i < SCREEN_WIDTH - 2; i++)
        {
            gotoxy(i, SCREEN_HEIGHT);
            cout << "_";
        }

        for (int i = 3; i < SCREEN_WIDTH; i++)
        {
            gotoxy(i, SCREEN_HEIGHT + 1);
            cout << "_";
        }

        for (int i = 3; i < SCREEN_WIDTH; i++)
        {
            gotoxy(i, 1);
            cout << "_";
        }

        for (int i = 5; i < SCREEN_WIDTH - 2; i++)
        {
            gotoxy(i, 2);
            cout << "_";
        }*/

        cout << "\n\n\n\n\n\n\n\n\n\t\t\t            Loading " << 2 * i
             << "%"
             << "\n\t\t\t           ____________________________________________________\n\n\t\t\t            ";
        for (int j = 1; j <= i; j++)
        {
            cout << "\xB2";
        }
        cout << "\n\t\t\t           ____________________________________________________";
        if (i > 1 && i < 20)
        {
            cout << "\n\n\t\t\t            Creating Temporary Files";
        }
        else if (i > 20 && i < 40)
        {
            cout << "\n\n\t\t\t            Accessing Main Memory";
        }
        else if (i > 40 && i < 48)
        {
            cout << "\n\n\t\t\t            Accessing Cache";
        }
        else
        {
            cout << "\n\n\t\t\t            Complete. Press Enter to Continue ";
        }
        Sleep(150 - i * 3);
    }
    getch();
    return 0;
}

// ZOMBIE SURVIVAL GAME

int enemyY[3];
int enemyX[3];
int enemyFlag[4];
char human[3] = {' ', ' ', 'a'};
int humanPos = WIN_WIDTH / 2;
int score = 0;
int bullets[20][4];
int bulletsLife[20];
int bIndex = 0;

void zombie_drawBorder()
{
    for (int i = 2; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 0; i < SCREEN_WIDTH + 1; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 2; i++)
    {
        gotoxy(0, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(SCREEN_WIDTH, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(1, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 2; i++)
    {
        gotoxy(SCREEN_WIDTH + 1, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(WIN_WIDTH, i);
        cout << "|";
    }
    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(WIN_WIDTH - 1, i);
        cout << "|";
    }
}

void genEnemy(int ind)
{
    enemyX[ind] = 3 + rand() % (WIN_WIDTH - 10);
}

void drawEnemy(int ind)
{
    if (enemyFlag[ind] == true)
    {
        gotoxy(enemyX[ind], enemyY[ind]);
        cout << ".**.";
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        cout << "****";
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        cout << "****";
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        cout << ".**.";
    }
}
void eraseEnemy(int ind)
{
    if (enemyFlag[ind] == true)
    {
        gotoxy(enemyX[ind], enemyY[ind]);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        cout << "    ";
    }
}
void resetEnemy(int ind)
{
    eraseEnemy(ind);
    enemyY[ind] = 4;
    genEnemy(ind);
}
void genBullet()
{
    bullets[bIndex][0] = 22;
    bullets[bIndex][1] = humanPos;
    bullets[bIndex][2] = 22;
    bullets[bIndex][3] = humanPos + 4;
    bIndex++;
    if (bIndex == 20)
        bIndex = 0;
}
void moveBullet()
{
    for (int i = 0; i < 20; i++)
    {
        if (bullets[i][0] > 2)
            bullets[i][0]--;
        else
            bullets[i][0] = 0;

        if (bullets[i][2] > 2)
            bullets[i][2]--;
        else
            bullets[i][2] = 0;
    }
}
void drawBullets()
{
    for (int i = 0; i < 20; i++)
    {
        if (bullets[i][0] > 1)
        {
            gotoxy(bullets[i][1], bullets[i][0]);
            cout << ".";
            gotoxy(bullets[i][3], bullets[i][2]);
            cout << ".";
        }
    }
}
void eraseBullets()
{
    for (int i = 0; i < 20; i++)
    {
        if (bullets[i][0] >= 1)
        {
            gotoxy(bullets[i][1], bullets[i][0]);
            cout << " ";
            gotoxy(bullets[i][3], bullets[i][2]);
            cout << " ";
        }
    }
}
void eraseBullet(int i)
{
    gotoxy(bullets[i][1], bullets[i][0]);
    cout << " ";
    gotoxy(bullets[i][3], bullets[i][2]);
    cout << " ";
}
void drawHuman()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            gotoxy(j + humanPos, i + 22);
            cout << human[i];
        }
    }
}
void eraseHuman()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            gotoxy(j + humanPos, i + 22);
            cout << " ";
        }
    }
}

int zombie_collision()
{
    if (enemyY[0] + 4 >= 23)
    {
        if (enemyX[0] + 4 - humanPos >= 0 && enemyX[0] + 4 - humanPos < 8)
        {
            return 1;
        }
    }
    return 0;
}

int bulletHit()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 4; j += 2)
        {
            if (bullets[i][j] != 0)
            {
                if (bullets[i][j] >= enemyY[0] && bullets[i][j] <= enemyY[0] + 4)
                {
                    if (bullets[i][j + 1] >= enemyX[0] && bullets[i][j + 1] <= enemyX[0] + 4)
                    {
                        eraseBullet(i);
                        bullets[i][j] = 0;
                        resetEnemy(0);
                        return 1;
                    }
                }
                if (bullets[i][j] >= enemyY[1] && bullets[i][j] <= enemyY[1] + 4)
                {
                    if (bullets[i][j + 1] >= enemyX[1] && bullets[i][j + 1] <= enemyX[1] + 4)
                    {
                        eraseBullet(i);
                        resetEnemy(1);
                        bullets[i][j] = 0;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void zombie_over()
{
    system("cls");
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }

    gotoxy(SCREEN_WIDTH / 2 - 28, 7);
    cout << "  .oooooo.          .o.       ooo        ooooo oooooooooooo  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 8);
    cout << " d8P'  `Y8b        .888.      `88.       .888' `888'     `8  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 9);
    cout << "888               .8\"888.      888b     d'888   888          ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 10);
    cout << "888              .8' `888.     8 Y88. .P  888   888oooo8     ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 11);
    cout << "888     ooooo   .88ooo8888.    8  `888'   888   888    \"     ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 12);
    cout << "`88.    .88'   .8'     `888.   8    Y     888   888       o  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 13);
    cout << " `Y8bood8P'   o88o     o8888o o8o        o888o o888ooooood8  ";

    gotoxy(SCREEN_WIDTH / 2 - 30, 15);
    cout << "  .oooooo.   oooooo     oooo oooooooooooo ooooooooo.        .o. ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 16);
    cout << " d8P'  `Y8b   `888.     .8'  `888'     `8 `888   `Y88.      888 ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 17);
    cout << "888      888   `888.   .8'    888          888   .d88'      888 ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 18);
    cout << "888      888    `888. .8'     888oooo8     888ooo88P'       Y8P ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 19);
    cout << "888      888     `888.8'      888    \"     888`88b.         `8' ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 20);
    cout << "`88b    d88'      `888'       888       o  888  `88b.       .o. ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 21);
    cout << " `Y8bood8P'        `8'       o888ooooood8 o888o  o888o      Y8P ";

    getch();
}

void zombie_updateScore()
{
    gotoxy(WIN_WIDTH + 5, 9);
    cout << " __ __ __  __  __ ";
    gotoxy(WIN_WIDTH + 5, 10);
    cout << "(_ /  /  \\|__)|_  ";
    gotoxy(WIN_WIDTH + 5, 11);
    cout << "__)\\__\\__/| \\ |__ ";

    gotoxy(WIN_WIDTH + 26, 11);
    cout << score;
}

void zombie_instructions()
{
    system("cls");
    gotoxy(1, 1);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
    gotoxy(1, 2);
    cout << "  (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)";
    gotoxy(1, 3);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 4);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 5);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 6);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 7);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 8);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 9);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 10);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 11);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 12);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 13);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 14);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 15);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 16);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 17);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 18);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 19);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 20);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 21);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 22);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 23);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 24);
    cout << "  (__  _)                                                                                                     (___ _)";
    gotoxy(1, 25);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 26);
    cout << "  (__  _)                                                                                                     (__ __)";
    gotoxy(1, 27);
    cout << "  (___ _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(___ _)";
    gotoxy(1, 28);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";

    gotoxy(SCREEN_WIDTH / 2 - 36, 5);
    cout << ".-..-. .-. .----..---. .----. .-. .-. .---.  .---. .-. .----. .-. .-. .----. ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 6);
    cout << "| ||  `| |{ {__ {_   _}| {}  }| { } |/  ___}{_   _}| |/  {}  \\|  `| |{ {__   ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 7);
    cout << "| || |\\  |.-._} } | |  | .-. \\| {_} |\\     }  | |  | |\\      /| |\\  |.-._} } ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 8);
    cout << "`-'`-' `-'`----'  `-'  `-' `-'`-----' `---'   `-'  `-' `----' `-' `-'`----'  ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 9);
    cout << "-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=--=x=--=x=--=x=-";

    gotoxy(SCREEN_WIDTH / 8, 12);
    cout << " _______                 ";
    gotoxy(SCREEN_WIDTH / 8, 13);
    cout << "|   _   |                ";
    gotoxy(SCREEN_WIDTH / 8, 14);
    cout << "|  |_|  |  Press Key A   ";
    gotoxy(SCREEN_WIDTH / 8, 15);
    cout << "|  | |  |  To Move Left  ";
    gotoxy(SCREEN_WIDTH / 8, 16);
    cout << "|_______|                ";

    gotoxy(SCREEN_WIDTH / 4 + 15, 12);
    cout << " _______                 ";
    gotoxy(SCREEN_WIDTH / 4 + 15, 13);
    cout << "|   _   |                ";
    gotoxy(SCREEN_WIDTH / 4 + 15, 14);
    cout << "|  | \\  |  Press Key D   ";
    gotoxy(SCREEN_WIDTH / 4 + 15, 15);
    cout << "|  |_/  |  To Move Right ";
    gotoxy(SCREEN_WIDTH / 4 + 15, 16);
    cout << "|_______|                ";

    gotoxy(SCREEN_WIDTH / 8, 19);
    cout << " _____________________________________                 ";
    gotoxy(SCREEN_WIDTH / 8, 20);
    cout << "|       __ _  _  __ __ _  _  _        |                ";
    gotoxy(SCREEN_WIDTH / 8, 21);
    cout << "|      (_ |_)|_|/  |_ |_)|_||_)       |  Press SpaceBar";
    gotoxy(SCREEN_WIDTH / 8, 22);
    cout << "|      __)|  | |\\__|__|_)| || \\       |  To Shoot      ";
    gotoxy(SCREEN_WIDTH / 8, 23);
    cout << "|_____________________________________|                ";
    getch();
}

void zombie_levelone()
{

    humanPos = -1 + WIN_WIDTH / 2;
    score = 0;
    enemyFlag[0] = 1;
    enemyFlag[1] = 1;
    enemyY[0] = enemyY[1] = 4;

    for (int i = 0; i < 20; i++)
    {
        bullets[i][0] = bullets[i][1] = 0;
    }

    system("cls");
    zombie_drawBorder();
    genEnemy(0);
    genEnemy(1);
    zombie_updateScore();

    gotoxy(WIN_WIDTH + 5, 1);
    cout << "___ __      __   __ ";
    gotoxy(WIN_WIDTH + 5, 2);
    cout << " _//  \\|\\/||__)||_  ";
    gotoxy(WIN_WIDTH + 5, 3);
    cout << "/__\\__/|  ||__)||__ ";

    gotoxy(WIN_WIDTH + 5, 4);
    cout << " __     __                ";
    gotoxy(WIN_WIDTH + 5, 5);
    cout << "(_ /  \\|__)\\  /|\\  / /\\ |  ";
    gotoxy(WIN_WIDTH + 5, 6);
    cout << "__)\\__/| \\  \\/ | \\/ /--\\|__ ";

    gotoxy(WIN_WIDTH + 5, 8);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 13);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";

    gotoxy(WIN_WIDTH + 5, 14);
    cout << " __ __     ___ __  __     __ ";
    gotoxy(WIN_WIDTH + 5, 15);
    cout << "/  /  \\|\\ | | |__)/  \\|  (_  ";
    gotoxy(WIN_WIDTH + 5, 16);
    cout << "\\__\\__/| \\| | | \\ \\__/|____) ";

    gotoxy(WIN_WIDTH + 5, 18);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 20);
    cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 5, 21);
    cout << " D Key - Right";
    gotoxy(WIN_WIDTH + 5, 22);
    cout << " Spacebar = Shoot";

    gotoxy(10, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(10, 5);
    cout << "                      ";

    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 'a' || ch == 'A')
            {
                if (humanPos > 2)
                    humanPos -= 2;
            }
            if (ch == 'd' || ch == 'D')
            {
                if (humanPos < WIN_WIDTH - 7)
                    humanPos += 2;
            }
            if (ch == 32)
            {
                genBullet();
            }
            if (ch == 27)
            {
                break;
            }
        }

        drawHuman();
        drawEnemy(0);
        drawEnemy(1);
        drawBullets();
        if (zombie_collision() == 1)
        {
            zombie_over();
            return;
        }
        if (bulletHit() == 1)
        {
            score++;
            zombie_updateScore();
        }
        Sleep(200);
        eraseHuman();
        eraseEnemy(0);
        eraseEnemy(1);
        eraseBullets();
        moveBullet();

        if (enemyFlag[0] == 1)
            enemyY[0] += 1;

        if (enemyFlag[1] == 1)
            enemyY[1] += 1;

        if (enemyY[0] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(0);
        }
        if (enemyY[1] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(1);
        }
    }
}

void zombie_leveltwo()
{

    humanPos = -1 + WIN_WIDTH / 2;
    score = 0;
    enemyFlag[0] = 1;
    enemyFlag[1] = 1;
    enemyFlag[2] = 1;
    enemyY[0] = enemyY[1] = enemyY[2] = 4;

    for (int i = 0; i < 20; i++)
    {
        bullets[i][0] = bullets[i][1] = 0;
    }

    system("cls");
    zombie_drawBorder();
    genEnemy(0);
    genEnemy(1);
    genEnemy(2);
    zombie_updateScore();

    gotoxy(WIN_WIDTH + 5, 1);
    cout << "___ __      __   __ ";
    gotoxy(WIN_WIDTH + 5, 2);
    cout << " _//  \\|\\/||__)||_  ";
    gotoxy(WIN_WIDTH + 5, 3);
    cout << "/__\\__/|  ||__)||__ ";

    gotoxy(WIN_WIDTH + 5, 4);
    cout << " __     __                ";
    gotoxy(WIN_WIDTH + 5, 5);
    cout << "(_ /  \\|__)\\  /|\\  / /\\ |  ";
    gotoxy(WIN_WIDTH + 5, 6);
    cout << "__)\\__/| \\  \\/ | \\/ /--\\|__ ";

    gotoxy(WIN_WIDTH + 5, 8);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 13);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    gotoxy(WIN_WIDTH + 5, 14);
    cout << " __ __     ___ __  __     __ ";
    gotoxy(WIN_WIDTH + 5, 15);
    cout << "/  /  \\|\\ | | |__)/  \\|  (_  ";
    gotoxy(WIN_WIDTH + 5, 16);
    cout << "\\__\\__/| \\| | | \\ \\__/|____) ";

    gotoxy(WIN_WIDTH + 5, 18);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 20);
    cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 5, 21);
    cout << " D Key - Right";
    gotoxy(WIN_WIDTH + 5, 22);
    cout << " Spacebar = Shoot";

    gotoxy(10, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(10, 5);
    cout << "                      ";

    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 'a' || ch == 'A')
            {
                if (humanPos > 2)
                    humanPos -= 2;
            }
            if (ch == 'd' || ch == 'D')
            {
                if (humanPos < WIN_WIDTH - 7)
                    humanPos += 2;
            }
            if (ch == 32)
            {
                genBullet();
            }
            if (ch == 27)
            {
                break;
            }
        }

        drawHuman();
        drawEnemy(0);
        drawEnemy(1);
        drawEnemy(2);
        drawBullets();
        if (zombie_collision() == 1)
        {
            zombie_over();
            return;
        }
        if (bulletHit() == 1)
        {
            score++;
            zombie_updateScore();
        }
        Sleep(200);
        eraseHuman();
        eraseEnemy(0);
        eraseEnemy(1);
        eraseEnemy(2);
        eraseBullets();
        moveBullet();

        if (enemyFlag[0] == 1)
            enemyY[0] += 1;

        if (enemyFlag[1] == 1)
            enemyY[1] += 1;

        if (enemyFlag[2] == 1)
            enemyY[2] += 1;

        if (enemyY[0] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(0);
        }
        if (enemyY[1] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(1);
        }
        if (enemyY[2] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(2);
        }
    }
}

void zombie_levelthree()
{

    humanPos = -1 + WIN_WIDTH / 2;
    score = 0;
    enemyFlag[0] = 1;
    enemyFlag[1] = 1;
    enemyFlag[2] = 1;
    enemyFlag[3] = 1;
    enemyY[0] = enemyY[1] = enemyY[2] = enemyY[3] = 4;

    for (int i = 0; i < 20; i++)
    {
        bullets[i][0] = bullets[i][1] = 0;
    }

    system("cls");
    zombie_drawBorder();
    genEnemy(0);
    genEnemy(1);
    genEnemy(2);
    genEnemy(3);
    zombie_updateScore();

    gotoxy(WIN_WIDTH + 5, 1);
    cout << "___ __      __   __ ";
    gotoxy(WIN_WIDTH + 5, 2);
    cout << " _//  \\|\\/||__)||_  ";
    gotoxy(WIN_WIDTH + 5, 3);
    cout << "/__\\__/|  ||__)||__ ";

    gotoxy(WIN_WIDTH + 5, 4);
    cout << " __     __                ";
    gotoxy(WIN_WIDTH + 5, 5);
    cout << "(_ /  \\|__)\\  /|\\  / /\\ |  ";
    gotoxy(WIN_WIDTH + 5, 6);
    cout << "__)\\__/| \\  \\/ | \\/ /--\\|__ ";

    gotoxy(WIN_WIDTH + 5, 8);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 13);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";

    gotoxy(WIN_WIDTH + 5, 14);
    cout << " __ __     ___ __  __     __ ";
    gotoxy(WIN_WIDTH + 5, 15);
    cout << "/  /  \\|\\ | | |__)/  \\|  (_  ";
    gotoxy(WIN_WIDTH + 5, 16);
    cout << "\\__\\__/| \\| | | \\ \\__/|____) ";

    gotoxy(WIN_WIDTH + 5, 18);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 20);
    cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 5, 21);
    cout << " D Key - Right";
    gotoxy(WIN_WIDTH + 5, 22);
    cout << " Spacebar = Shoot";

    gotoxy(10, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(10, 5);
    cout << "                      ";

    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 'a' || ch == 'A')
            {
                if (humanPos > 2)
                    humanPos -= 2;
            }
            if (ch == 'd' || ch == 'D')
            {
                if (humanPos < WIN_WIDTH - 7)
                    humanPos += 2;
            }
            if (ch == 32)
            {
                genBullet();
            }
            if (ch == 27)
            {
                break;
            }
        }

        drawHuman();
        drawEnemy(0);
        drawEnemy(1);
        drawEnemy(2);
        drawEnemy(3);
        drawBullets();
        if (zombie_collision() == 1)
        {
            zombie_over();
            return;
        }
        if (bulletHit() == 1)
        {
            score++;
            zombie_updateScore();
        }
        Sleep(200);
        eraseHuman();
        eraseEnemy(0);
        eraseEnemy(1);
        eraseEnemy(2);
        eraseEnemy(3);
        eraseBullets();
        moveBullet();

        if (enemyFlag[0] == 1)
            enemyY[0] += 1;

        if (enemyFlag[1] == 1)
            enemyY[1] += 1;

        if (enemyFlag[2] == 1)
            enemyY[2] += 1;

        if (enemyFlag[3] == 1)
            enemyY[3] += 1;

        if (enemyY[0] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(0);
        }
        if (enemyY[1] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(1);
        }
        if (enemyY[2] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(2);
        }
        if (enemyY[3] > SCREEN_HEIGHT - 5)
        {
            resetEnemy(3);
        }
    }
}

void zombie_mainmenu()
{
    /*for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }*/
    gotoxy(1, 1);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
    gotoxy(1, 2);
    cout << "  (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)";
    gotoxy(1, 3);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 4);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 5);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 6);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 7);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 8);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 9);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 10);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 11);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 12);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 13);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 14);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 15);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 16);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 17);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 18);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 19);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 20);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 21);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 22);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 23);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 24);
    cout << "  (__  _)                                                                                                     (___ _)";
    gotoxy(1, 25);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 26);
    cout << "  (__  _)                                                                                                     (__ __)";
    gotoxy(1, 27);
    cout << "  (___ _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(___ _)";
    gotoxy(1, 28);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
}

void zombie_levels()
{
    /*for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }*/
    gotoxy(1, 1);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
    gotoxy(1, 2);
    cout << "  (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)";
    gotoxy(1, 3);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 4);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 5);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 6);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 7);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 8);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 9);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 10);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 11);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 12);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 13);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 14);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 15);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 16);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 17);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 18);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 19);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 20);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 21);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 22);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 23);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 24);
    cout << "  (__  _)                                                                                                     (___ _)";
    gotoxy(1, 25);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 26);
    cout << "  (__  _)                                                                                                     (__ __)";
    gotoxy(1, 27);
    cout << "  (___ _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(___ _)";
    gotoxy(1, 28);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";

    gotoxy(15, 5);
    cout << "   (``'....'```'....'````'....'````'....'``)";
    gotoxy(15, 6);
    cout << "  ( \\        ____   __   ____  _  _       / )";
    gotoxy(15, 7);
    cout << " ( \\ )      (  __) / _\\ / ___)( \\/ )     ( / )";
    gotoxy(15, 8);
    cout << "( ) (        ) _) /    \\\\___ \\ )  /       ) ( )";
    gotoxy(15, 9);
    cout << " ( / )      (____)\\_/\\_/(____/(__/       ( \\ )";
    gotoxy(15, 10);
    cout << "  ( /                                     \\ )";
    gotoxy(15, 11);
    cout << "   (_.'```'....'```'....'```'....'```'...._)";

    gotoxy(50, 12);
    cout << "   (``'....'```'....'````'....'````'....'``....'````')";
    gotoxy(50, 13);
    cout << "  ( \\        _  _  ____  ____  __  _  _  _  _       / )";
    gotoxy(50, 14);
    cout << " ( \\ )      ( \\/ )(  __)(    \\(  )/ )( \\( \\/ )     ( / )";
    gotoxy(50, 15);
    cout << "( ) (       / \\/ \\ ) _)  ) D ( )( ) \\/ (/ \\/ \\      ) ( )";
    gotoxy(50, 16);
    cout << " ( / )      \\_)(_/(____)(____/(__)\\____/\\_)(_/     ( \\ )";
    gotoxy(50, 17);
    cout << "  ( /                                               \\ )";
    gotoxy(50, 18);
    cout << "   (_.'```'....'```'....'```'....'```'....'```'....'_)";

    gotoxy(15, 19);
    cout << "   (``'....'```'....'````'....'````'....'``)";
    gotoxy(15, 20);
    cout << "  ( \\        _  _   __   ____  ____       / )";
    gotoxy(15, 21);
    cout << " ( \\ )      / )( \\ / _\\ (  _ \\(    \\     ( / )";
    gotoxy(15, 22);
    cout << "( ) (       ) __ (/    \\ )   / ) D (      ) ( )";
    gotoxy(15, 23);
    cout << " ( / )      \\_)(_/\\_/\\_/(__\\_)(____/     ( \\ )";
    gotoxy(15, 24);
    cout << "  ( /                                     \\ )";
    gotoxy(15, 25);
    cout << "   (_.'```'....'```'....'```'....'```'...._)";
}

// FLAPPY BIRD GAME

#define hurdlePos 74

char bird[2][6] = {'/', '-', '-', 'o', '\\', ' ',
                   '|', '_', '_', '_', ' ', '>'};

int birdPos = 6;
int speed = 40;
int gameover = 0;
int pipePos[3];
int gapPos[3];
int pipeFlag[3];
int flappy_score = 0;

void drawBird()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            gotoxy(j + 20, i + birdPos);
            cout << bird[i][j];
        }
    }
}

void eraseBird()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            gotoxy(j + 20, i + birdPos);
            cout << " ";
        }
    }
}

void drawHurdle()
{
    static int plantX = 0;
    static int score = 0;

    /*if (plantX == 56 && birdPos < 4)
    {
        score = 0;
        speed = 40;
        gotoxy(36, 8);
        flappy_over();
        getch();
        gameover = 1;
    }*/

    gotoxy(hurdlePos - plantX, 20);
    cout << "| | ";
    gotoxy(hurdlePos - plantX, 21);
    cout << "| | ";
    gotoxy(hurdlePos - plantX, 22);
    cout << "|_| ";
    gotoxy(hurdlePos - plantX, 23);
    cout << " |  ";
    gotoxy(hurdlePos - plantX, 24);
    cout << " |  ";

    plantX++;

    if (plantX == 73)
    {
        plantX = 0;
        score++;
        gotoxy(WIN_WIDTH + 7, 5);
        cout << "     ";
        gotoxy(WIN_WIDTH + 7, 5);
        cout << score;
        if (speed > 20)
            speed--;

        gotoxy(plantX, 20);
        cout << "      ";
        gotoxy(plantX, 21);
        cout << "      ";
        gotoxy(plantX, 22);
        cout << "      ";
        gotoxy(plantX, 23);
        cout << "      ";
        gotoxy(plantX, 24);
        cout << "      ";
    }
}

void flappy_drawBorder()
{
    for (int i = 2; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 0; i < SCREEN_WIDTH + 1; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 2; i++)
    {
        gotoxy(0, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(SCREEN_WIDTH, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(1, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 2; i++)
    {
        gotoxy(SCREEN_WIDTH + 1, i);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(WIN_WIDTH, i);
        cout << "|";
    }
    for (int i = 0; i < SCREEN_HEIGHT + 1; i++)
    {
        gotoxy(WIN_WIDTH - 1, i);
        cout << "|";
    }
}

void drawCloudUp()
{
    static int cloudX = 0;
    static int score = 0;

    /*if (cloudX == 56 && birdPos < 4)
    {
        score = 0;
        speed = 40;
        gotoxy(36, 8);
        cout << "Game Over";
        getch();
        gameover = 1;
    }*/

    gotoxy(hurdlePos - cloudX, 4);
    cout << "   @@@@@  @@@@@@   ";
    gotoxy(hurdlePos - cloudX, 5);
    cout << " @@     @@      @@ ";
    gotoxy(hurdlePos - cloudX, 6);
    cout << " @@     @@      @@ ";
    gotoxy(hurdlePos - cloudX, 7);
    cout << "   @@@@@  @@@@@@   ";

    cloudX++;

    if (cloudX == 73)
    {
        cloudX = 0;
        score++;
        gotoxy(WIN_WIDTH + 5, 9);
        cout << " __ __ __  __  __ ";
        gotoxy(WIN_WIDTH + 5, 10);
        cout << "(_ /  /  \\|__)|_  ";
        gotoxy(WIN_WIDTH + 5, 11);
        cout << "__)\\__\\__/| \\ |__ ";

        gotoxy(WIN_WIDTH + 26, 11);
        cout << score;
        if (speed > 20)
            speed--;

        gotoxy(cloudX, 4);
        cout << "                                 ";
        gotoxy(cloudX, 5);
        cout << "                              ";
        gotoxy(cloudX, 6);
        cout << "                                       ";
        gotoxy(cloudX, 7);
        cout << "                                         ";
    }
}

void drawCloudDown()
{
    static int cloudX = 0;
    static int score = 0;

    /*if (cloudX == 56 && birdPos < 4)
    {
        score = 0;
        speed = 40;
        gotoxy(36, 8);
        cout << "Game Over";
        getch();
        gameover = 1;
    }*/

    gotoxy(hurdlePos - cloudX, 18);
    cout << "   @@@@@  @@@@@@   ";
    gotoxy(hurdlePos - cloudX, 19);
    cout << " @@     @@      @@ ";
    gotoxy(hurdlePos - cloudX, 20);
    cout << " @@     @@      @@ ";
    gotoxy(hurdlePos - cloudX, 21);
    cout << "   @@@@@  @@@@@@   ";

    cloudX++;

    if ((cloudX == 65 && birdPos == 4) || (cloudX == 65 && birdPos == 5) || (cloudX == 65 && birdPos == 6) || (cloudX == 65 && birdPos == 7))
    {
        score = 0;
        speed = 40;
        gotoxy(36, 8);
        cout << "Game Over";
        getch();
        gameover = 1;
    }

    if (cloudX == 73)
    {
        cloudX = 0;
        score++;
        gotoxy(11, 2);
        cout << "                   ";
        gotoxy(11, 2);
        cout << score;
        if (speed > 20)
            speed--;

        gotoxy(cloudX, 18);
        cout << "                                 ";
        gotoxy(cloudX, 19);
        cout << "                              ";
        gotoxy(cloudX, 20);
        cout << "                                       ";
        gotoxy(cloudX, 21);
        cout << "                                         ";
    }
}

void genPipe(int ind)
{
    gapPos[ind] = 3 + rand() % 14;
}

void drawPipe(int ind)
{
    if (pipeFlag[ind] == true)
    {
        for (int i = 0; i < gapPos[ind]; i++)
        {
            gotoxy(WIN_WIDTH - pipePos[ind], i + 1);
            cout << "   ";
        }
        for (int i = gapPos[ind] + GAP_SIZE; i < SCREEN_HEIGHT - 1; i++)
        {
            gotoxy(WIN_WIDTH - pipePos[ind], i + 1);
            cout << "***";
        }
    }
}

void erasePipe(int ind)
{
    if (pipeFlag[ind] == true)
    {
        for (int i = 0; i < gapPos[ind]; i++)
        {
            gotoxy(WIN_WIDTH - pipePos[ind], i + 1);
            cout << "   ";
        }
        for (int i = gapPos[ind] + GAP_SIZE; i < SCREEN_HEIGHT - 1; i++)
        {
            gotoxy(WIN_WIDTH - pipePos[ind], i + 1);
            cout << "   ";
        }
    }
}

int flappy_collision()
{
    if (pipePos[0] >= 61)
    {
        if (birdPos < gapPos[0] || birdPos > gapPos[0] + GAP_SIZE)
        {
            //			cout<< " HIT ";
            //			getch();
            return 1;
        }
    }
    return 0;
}

void flappy_instructions()
{
    system("cls");

    /*for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }*/

    gotoxy(1, 1);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
    gotoxy(1, 2);
    cout << "  (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)";
    gotoxy(1, 3);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 4);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 5);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 6);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 7);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 8);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 9);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 10);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 11);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 12);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 13);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 14);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 15);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 16);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 17);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 18);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 19);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 20);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 21);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 22);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 23);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 24);
    cout << "  (__  _)                                                                                                     (___ _)";
    gotoxy(1, 25);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 26);
    cout << "  (__  _)                                                                                                     (__ __)";
    gotoxy(1, 27);
    cout << "  (___ _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(___ _)";
    gotoxy(1, 28);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";

    gotoxy(SCREEN_WIDTH / 2 - 36, 5);
    cout << ".-..-. .-. .----..---. .----. .-. .-. .---.  .---. .-. .----. .-. .-. .----. ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 6);
    cout << "| ||  `| |{ {__ {_   _}| {}  }| { } |/  ___}{_   _}| |/  {}  \\|  `| |{ {__   ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 7);
    cout << "| || |\\  |.-._} } | |  | .-. \\| {_} |\\     }  | |  | |\\      /| |\\  |.-._} } ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 8);
    cout << "`-'`-' `-'`----'  `-'  `-' `-'`-----' `---'   `-'  `-' `----' `-' `-'`----'  ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 9);
    cout << "-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=--=x=--=x=--=x=-";

    gotoxy(SCREEN_WIDTH / 4 + 5, 12);
    cout << " _____________________________________                 ";
    gotoxy(SCREEN_WIDTH / 4 + 5, 13);
    cout << "|       __ _  _  __ __ _  _  _        |                ";
    gotoxy(SCREEN_WIDTH / 4 + 5, 14);
    cout << "|      (_ |_)|_|/  |_ |_)|_||_)       |  Press SpaceBar";
    gotoxy(SCREEN_WIDTH / 4 + 5, 15);
    cout << "|      __)|  | |\\__|__|_)| || \\       |  To Shoot      ";
    gotoxy(SCREEN_WIDTH / 4 + 5, 16);
    cout << "|_____________________________________|                ";

    getch();
}

void flappy_over();

void flappy_over()
{
    system("cls");
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }

    gotoxy(SCREEN_WIDTH / 2 - 28, 7);
    cout << "  .oooooo.          .o.       ooo        ooooo oooooooooooo  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 8);
    cout << " d8P'  `Y8b        .888.      `88.       .888' `888'     `8  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 9);
    cout << "888               .8\"888.      888b     d'888   888          ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 10);
    cout << "888              .8' `888.     8 Y88. .P  888   888oooo8     ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 11);
    cout << "888     ooooo   .88ooo8888.    8  `888'   888   888    \"     ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 12);
    cout << "`88.    .88'   .8'     `888.   8    Y     888   888       o  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 13);
    cout << " `Y8bood8P'   o88o     o8888o o8o        o888o o888ooooood8  ";

    gotoxy(SCREEN_WIDTH / 2 - 30, 15);
    cout << "  .oooooo.   oooooo     oooo oooooooooooo ooooooooo.        .o. ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 16);
    cout << " d8P'  `Y8b   `888.     .8'  `888'     `8 `888   `Y88.      888 ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 17);
    cout << "888      888   `888.   .8'    888          888   .d88'      888 ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 18);
    cout << "888      888    `888. .8'     888oooo8     888ooo88P'       Y8P ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 19);
    cout << "888      888     `888.8'      888    \"     888`88b.         `8' ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 20);
    cout << "`88b    d88'      `888'       888       o  888  `88b.       .o. ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 21);
    cout << " `Y8bood8P'        `8'       o888ooooood8 o888o  o888o      Y8P ";

    getch();
}

void flappy_init()
{
    system("cls");
    gameover = 0;
    gotoxy(WIN_WIDTH + 7, 5);
    cout << "SCORE : ";
    for (int i = 0; i < 79; i++)
    {
        gotoxy(1 + i, 1);
        cout << "ß";
        gotoxy(1 + i, 25);
        cout << "ß";
    }
}

void flappy_updateScore()
{
    gotoxy(WIN_WIDTH + 5, 9);
    cout << " __ __ __  __  __ ";
    gotoxy(WIN_WIDTH + 5, 10);
    cout << "(_ /  /  \\|__)|_  ";
    gotoxy(WIN_WIDTH + 5, 11);
    cout << "__)\\__\\__/| \\ |__ ";

    gotoxy(WIN_WIDTH + 26, 11);
    cout << score;
}

void flappy_levelone()
{
    birdPos = 6;
    score = 0;
    pipeFlag[0] = 1;
    pipeFlag[1] = 0;
    pipePos[0] = pipePos[1] = 4;

    system("cls");
    flappy_drawBorder();
    genPipe(0);
    flappy_updateScore();

    gotoxy(WIN_WIDTH + 5, 1);
    cout << " __  __   __  __     ";
    gotoxy(WIN_WIDTH + 5, 2);
    cout << "|  \\|__)||__)|__)\\_/ ";
    gotoxy(WIN_WIDTH + 5, 3);
    cout << "|__/| \\ ||   |    |  ";

    gotoxy(WIN_WIDTH + 5, 4);
    cout << " __   __  __  ";
    gotoxy(WIN_WIDTH + 5, 5);
    cout << "|__)||__)|  \\ ";
    gotoxy(WIN_WIDTH + 5, 6);
    cout << "|__)|| \\ |__/ ";

    gotoxy(WIN_WIDTH + 5, 8);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 13);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";

    gotoxy(WIN_WIDTH + 5, 14);
    cout << " __ __     ___ __  __     __ ";
    gotoxy(WIN_WIDTH + 5, 15);
    cout << "/  /  \\|\\ | | |__)/  \\|  (_  ";
    gotoxy(WIN_WIDTH + 5, 16);
    cout << "\\__\\__/| \\| | | \\ \\__/|____) ";

    gotoxy(WIN_WIDTH + 5, 18);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 20);
    cout << " Spacebar = Shoot";

    gotoxy(10, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(10, 5);
    cout << "                      ";

    while (1)
    {

        if (kbhit())
        {
            char ch = getch();
            if (ch == 32)
            {
                if (birdPos > 3)
                    birdPos -= 3;
            }
            if (ch == 27)
            {
                break;
            }
        }

        drawBird();
        drawPipe(0);
        drawPipe(1);

        if (flappy_collision() == 1)
        {
            flappy_over();
            return;
        }
        Sleep(100);
        eraseBird();
        erasePipe(0);
        erasePipe(1);
        birdPos += 1;

        if (birdPos > SCREEN_HEIGHT - 2)
        {
            flappy_over();
            return;
        }

        if (pipeFlag[0] == 1)
            pipePos[0] += 2;

        if (pipeFlag[1] == 1)
            pipePos[1] += 2;

        if (pipePos[0] >= 40 && pipePos[0] < 42)
        {
            pipeFlag[1] = 1;
            pipePos[1] = 4;
            genPipe(1);
        }
        if (pipePos[0] > 68)
        {
            score++;
            flappy_updateScore();
            pipeFlag[1] = 0;
            pipePos[0] = pipePos[1];
            gapPos[0] = gapPos[1];
        }
    }
}

void flappy_leveltwo()
{
    birdPos = 6;

    system("cls");
    flappy_drawBorder();

    gotoxy(WIN_WIDTH + 5, 1);
    cout << " __  __   __  __     ";
    gotoxy(WIN_WIDTH + 5, 2);
    cout << "|  \\|__)||__)|__)\\_/ ";
    gotoxy(WIN_WIDTH + 5, 3);
    cout << "|__/| \\ ||   |    |  ";

    gotoxy(WIN_WIDTH + 5, 4);
    cout << " __   __  __  ";
    gotoxy(WIN_WIDTH + 5, 5);
    cout << "|__)||__)|  \\ ";
    gotoxy(WIN_WIDTH + 5, 6);
    cout << "|__)|| \\ |__/ ";

    gotoxy(WIN_WIDTH + 5, 8);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 13);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";

    gotoxy(WIN_WIDTH + 5, 14);
    cout << " __ __     ___ __  __     __ ";
    gotoxy(WIN_WIDTH + 5, 15);
    cout << "/  /  \\|\\ | | |__)/  \\|  (_  ";
    gotoxy(WIN_WIDTH + 5, 16);
    cout << "\\__\\__/| \\| | | \\ \\__/|____) ";

    gotoxy(WIN_WIDTH + 5, 18);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 20);
    cout << " Spacebar = Shoot";

    gotoxy(10, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(10, 5);
    cout << "                      ";

    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 32)
            {
                if (birdPos > 3)
                    birdPos -= 3;
            }
            if (ch == 27)
            {
                break;
            }
        }
        drawBird();
        drawCloudUp();
        drawCloudDown();

        Sleep(100);
        eraseBird();
        birdPos += 1;
        drawCloudUp();
        drawCloudDown();
        flappy_drawBorder();

        if (birdPos > SCREEN_HEIGHT - 5)
        {
            flappy_over();
            return;
        }

        if (birdPos < 4)
        {
            flappy_over();
            return;
        }
    }
}

void flappy_levelthree()
{
    birdPos = 6;
    score = 0;
    pipeFlag[0] = 1;
    pipeFlag[1] = 0;
    pipePos[0] = pipePos[1] = 4;

    system("cls");
    flappy_drawBorder();
    genPipe(0);
    flappy_updateScore();

    gotoxy(WIN_WIDTH + 5, 1);
    cout << " __  __   __  __     ";
    gotoxy(WIN_WIDTH + 5, 2);
    cout << "|  \\|__)||__)|__)\\_/ ";
    gotoxy(WIN_WIDTH + 5, 3);
    cout << "|__/| \\ ||   |    |  ";

    gotoxy(WIN_WIDTH + 5, 4);
    cout << " __   __  __  ";
    gotoxy(WIN_WIDTH + 5, 5);
    cout << "|__)||__)|  \\ ";
    gotoxy(WIN_WIDTH + 5, 6);
    cout << "|__)|| \\ |__/ ";

    gotoxy(WIN_WIDTH + 5, 8);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 13);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";

    gotoxy(WIN_WIDTH + 5, 14);
    cout << " __ __     ___ __  __     __ ";
    gotoxy(WIN_WIDTH + 5, 15);
    cout << "/  /  \\|\\ | | |__)/  \\|  (_  ";
    gotoxy(WIN_WIDTH + 5, 16);
    cout << "\\__\\__/| \\| | | \\ \\__/|____) ";

    gotoxy(WIN_WIDTH + 5, 18);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoxy(WIN_WIDTH + 5, 20);
    cout << " Spacebar = Shoot";

    gotoxy(10, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(10, 5);
    cout << "                      ";

    while (1)
    {

        if (kbhit())
        {
            char ch = getch();
            if (ch == 32)
            {
                if (birdPos > 3)
                    birdPos -= 3;
            }
            if (ch == 27)
            {
                break;
            }
        }

        drawBird();
        drawCloudUp();
        drawPipe(0);
        drawPipe(1);
        if (flappy_collision() == 1)
        {
            flappy_over();
            return;
        }
        Sleep(100);
        eraseBird();
        drawCloudUp();
        erasePipe(0);
        erasePipe(1);
        birdPos += 1;

        if (birdPos > SCREEN_HEIGHT - 2)
        {
            flappy_over();
            return;
        }

        if (birdPos < 4)
        {
            flappy_over();
            return;
        }

        if (pipeFlag[0] == 1)
            pipePos[0] += 2;

        if (pipeFlag[1] == 1)
            pipePos[1] += 2;

        if (pipePos[0] >= 40 && pipePos[0] < 42)
        {
            pipeFlag[1] = 1;
            pipePos[1] = 4;
            genPipe(1);
        }
        if (pipePos[0] > 68)
        {
            score++;
            flappy_updateScore();
            pipeFlag[1] = 0;
            pipePos[0] = pipePos[1];
            gapPos[0] = gapPos[1];
        }
    }
}

void flappy_mainmenu()
{
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }
}

void flappy_levels()
{
    gotoxy(1, 1);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
    gotoxy(1, 2);
    cout << "  (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)";
    gotoxy(1, 3);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 4);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 5);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 6);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 7);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 8);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 9);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 10);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 11);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 12);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 13);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 14);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 15);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 16);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 17);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 18);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 19);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 20);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 21);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 22);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 23);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 24);
    cout << "  (__  _)                                                                                                     (___ _)";
    gotoxy(1, 25);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 26);
    cout << "  (__  _)                                                                                                     (__ __)";
    gotoxy(1, 27);
    cout << "  (___ _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(___ _)";
    gotoxy(1, 28);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";

    gotoxy(15, 5);
    cout << "   (``'....'```'....'````'....'````'....'``)";
    gotoxy(15, 6);
    cout << "  ( \\        ____   __   ____  _  _       / )";
    gotoxy(15, 7);
    cout << " ( \\ )      (  __) / _\\ / ___)( \\/ )     ( / )";
    gotoxy(15, 8);
    cout << "( ) (        ) _) /    \\\\___ \\ )  /       ) ( )";
    gotoxy(15, 9);
    cout << " ( / )      (____)\\_/\\_/(____/(__/       ( \\ )";
    gotoxy(15, 10);
    cout << "  ( /                                     \\ )";
    gotoxy(15, 11);
    cout << "   (_.'```'....'```'....'```'....'```'...._)";

    gotoxy(50, 12);
    cout << "   (``'....'```'....'````'....'````'....'``....'````')";
    gotoxy(50, 13);
    cout << "  ( \\        _  _  ____  ____  __  _  _  _  _       / )";
    gotoxy(50, 14);
    cout << " ( \\ )      ( \\/ )(  __)(    \\(  )/ )( \\( \\/ )     ( / )";
    gotoxy(50, 15);
    cout << "( ) (       / \\/ \\ ) _)  ) D ( )( ) \\/ (/ \\/ \\      ) ( )";
    gotoxy(50, 16);
    cout << " ( / )      \\_)(_/(____)(____/(__)\\____/\\_)(_/     ( \\ )";
    gotoxy(50, 17);
    cout << "  ( /                                               \\ )";
    gotoxy(50, 18);
    cout << "   (_.'```'....'```'....'```'....'```'....'```'....'_)";

    gotoxy(15, 19);
    cout << "   (``'....'```'....'````'....'````'....'``)";
    gotoxy(15, 20);
    cout << "  ( \\        _  _   __   ____  ____       / )";
    gotoxy(15, 21);
    cout << " ( \\ )      / )( \\ / _\\ (  _ \\(    \\     ( / )";
    gotoxy(15, 22);
    cout << "( ) (       ) __ (/    \\ )   / ) D (      ) ( )";
    gotoxy(15, 23);
    cout << " ( / )      \\_)(_/\\_/\\_/(__\\_)(____/     ( \\ )";
    gotoxy(15, 24);
    cout << "  ( /                                     \\ )";
    gotoxy(15, 25);
    cout << "   (_.'```'....'```'....'```'....'```'...._)";
}

// NINJA CLIMB GAME

void print_at_xy(int x, int y, char *val);
void display_score();
void ninja_init();
int zero_lives();
void set_game_state_over();
char get_input();
void update_player(char);
void update_wall();
void increment_score();
void decrement_lives();
void ninja_draw();
void draw_wall();
void draw_ninja();
void clean_up();
void clear_screen();
void display_message(const char *, int yOffset);
void update_ninja(char ch);
int collides_with_spike();
void display_count_down();
void ninja_over();

const int NINJA_SCREEN_WIDTH = 12;
const int NINJA_SCREEN_HEIGHT = 20;
int lives;
int game_state;
int GAME_STATE_OVER;
int GAME_STATE_PLAYING;
int GOAL_POINTS;
int WALL_SPEED;
int ninja_score;
char avatar[2];
char game_over_string[30];
char left_wall[60];
char right_wall[60];
char left_spike[3];
char right_spike[3];
char ninja[2];
int wall_y_pos;
int ninja_x;
int ninja_y;
int NINJA_SPEED;
int ninja_delta;
int left_wall_spike;
int right_wall_spike;
int immunity_count_down;

int ninja_play()
{
    ninja_init();
    system("cls");

    while (1)
    {

        if (immunity_count_down > 0)
        {
            immunity_count_down--;
        }

        clear_screen();

        char ch = get_input();

        if (game_state == GAME_STATE_OVER && ch == 'q')
        {
            system("cls");
            break;
        }

        clear_screen();
        update_wall();
        update_ninja(ch);
        ninja_draw();
        if (collides_with_spike() && immunity_count_down <= 0)
        {
            decrement_lives();
            immunity_count_down = 30;
        }

        if (zero_lives())
        {
            set_game_state_over();
            system("cls");
            ninja_over();
            break;
        }
        Sleep(100);
    }
}

void ninja_over()
{
    system("cls");
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }

    gotoxy(SCREEN_WIDTH / 2 - 28, 7);
    cout << "  .oooooo.          .o.       ooo        ooooo oooooooooooo  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 8);
    cout << " d8P'  `Y8b        .888.      `88.       .888' `888'     `8  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 9);
    cout << "888               .8\"888.      888b     d'888   888          ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 10);
    cout << "888              .8' `888.     8 Y88. .P  888   888oooo8     ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 11);
    cout << "888     ooooo   .88ooo8888.    8  `888'   888   888    \"     ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 12);
    cout << "`88.    .88'   .8'     `888.   8    Y     888   888       o  ";
    gotoxy(SCREEN_WIDTH / 2 - 28, 13);
    cout << " `Y8bood8P'   o88o     o8888o o8o        o888o o888ooooood8  ";

    gotoxy(SCREEN_WIDTH / 2 - 30, 15);
    cout << "  .oooooo.   oooooo     oooo oooooooooooo ooooooooo.        .o. ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 16);
    cout << " d8P'  `Y8b   `888.     .8'  `888'     `8 `888   `Y88.      888 ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 17);
    cout << "888      888   `888.   .8'    888          888   .d88'      888 ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 18);
    cout << "888      888    `888. .8'     888oooo8     888ooo88P'       Y8P ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 19);
    cout << "888      888     `888.8'      888    \"     888`88b.         `8' ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 20);
    cout << "`88b    d88'      `888'       888       o  888  `88b.       .o. ";
    gotoxy(SCREEN_WIDTH / 2 - 30, 21);
    cout << " `Y8bood8P'        `8'       o888ooooood8 o888o  o888o      Y8P ";

    getch();
}

void ninja_hidecursor()
{
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(console, &info);
}

void ninja_init()
{
    ninja_score = 0;
    lives = 3;
    GOAL_POINTS = 10;
    GAME_STATE_OVER = 1;
    GAME_STATE_PLAYING = 2;
    WALL_SPEED = 1;

    ninja_x = 1;
    ninja_y = SCREEN_HEIGHT / 2;
    NINJA_SPEED = 6;
    ninja_delta = 0;
    left_wall_spike = 0;
    right_wall_spike = 0;
    immunity_count_down = 30;

    game_state = GAME_STATE_PLAYING;
    wall_y_pos = -20;
    strcpy(left_spike, "|>");
    strcpy(right_spike, "<|");
    strcpy(ninja, "Y");

    strcpy(left_wall, "|||>|||||||||||||>>||||||>>||||||>>||||");
    strcpy(right_wall, "|||||||||<||||<||||||||<||||||<<||||||<");
    ninja_hidecursor();
}

int zero_lives()
{
    if (lives == 0)
    {
        return 1;
    }
    return 0;
}

void set_game_state_over()
{
    game_state = GAME_STATE_OVER;
}

char get_input()
{
    char ch = 0;

    if (kbhit())
    {
        ch = getch();
    }

    return ch;
}

void update_player(char ch)
{
}

void increment_score()
{
    ninja_score += GOAL_POINTS;
}

void decrement_lives()
{
    lives--;
}

void ninja_draw()
{
    draw_wall();
    draw_ninja();
    display_score();
    display_count_down();
}

void print_at_xy(int x, int y, char *val)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(console, coord);
    cout << (const char *)val;
    fflush(stdout);
}

void display_score()
{
    char buffer[50] = {0};
    sprintf(buffer, "SCORE: %4d LIVES: %d", score, lives); //
    print_at_xy(0, 0, buffer);
}

void clear_screen()
{
    char buffer[] = "            ";

    for (int i = 0; i < 3; i++)
    {
        print_at_xy(0, i, buffer);
    }
}

void display_message(const char *message, int yOffset)
{
    char buffer[100] = {0};
    strcpy(buffer, message);
    print_at_xy(NINJA_SCREEN_WIDTH / 2 - strlen(message) / 2,
                (NINJA_SCREEN_HEIGHT / 2 - 1) + yOffset, buffer);
}

void display_count_down()
{
    if (immunity_count_down > 0)
    {
        char buffer[3] = {0};
        char *countdown = itoa(immunity_count_down / 10, buffer, 10);
        strcpy(buffer, countdown);
        display_message("GET READY!", -2); //
        display_message(buffer, 0);
    }
}

void update_wall()
{
    wall_y_pos += WALL_SPEED;
    if (wall_y_pos > 0)
    {
        wall_y_pos = -NINJA_SCREEN_HEIGHT;
    }
}

void update_ninja(char ch)
{
    ninja_x += ninja_delta;
    if (ninja_x == 1 && ch == 'j' && game_state == GAME_STATE_PLAYING)
    {
        ninja_delta = NINJA_SPEED;
        ninja_x += ninja_delta;
        increment_score();
    }
    else if (ninja_x == NINJA_SCREEN_WIDTH - 1 && ch == 'j' && game_state == GAME_STATE_PLAYING)
    {
        ninja_delta = -NINJA_SPEED;
        ninja_x += ninja_delta;
        increment_score();
    }
    else if (ninja_x <= 1)
    {
        ninja_delta = 0;
        ninja_x = 1;
    }
    else if (ninja_x >= NINJA_SCREEN_WIDTH - 1)
    {
        ninja_delta = 0;
        ninja_x = NINJA_SCREEN_WIDTH - 1;
    }

    if (immunity_count_down > 10 && lives < 3)
    {
        ninja_x = NINJA_SCREEN_WIDTH / 2;
        ninja_y += 1;
        if (ninja_y >= NINJA_SCREEN_HEIGHT)
        {
            ninja_y = NINJA_SCREEN_HEIGHT;
        }
    }
    if (immunity_count_down < 10 && immunity_count_down > 1)
    {
        ninja_x = 1;
        ninja_y = NINJA_SCREEN_HEIGHT / 2;
    }
}

int collides_with_spike()
{
    if (game_state == GAME_STATE_OVER)
    {
        return 0;
    }

    if (ninja_x == 1 && left_wall_spike == 1)
    {
        return 1;
    }
    else if (ninja_x == NINJA_SCREEN_WIDTH - 1 && right_wall_spike == 1)
    {
        return 1;
    }

    return 0;
}

void draw_wall()
{
    char wall_row[NINJA_SCREEN_WIDTH + 1];
    int wall_index = wall_y_pos * -1;
    left_wall_spike = 0;
    right_wall_spike = 0;
    for (int i = 2; i < 20; i++, wall_index++)
    {

        for (int j = 1; j < NINJA_SCREEN_WIDTH; j++)
        {
            wall_row[j] = ' ';
        }

        wall_row[NINJA_SCREEN_WIDTH + 1] = '\0';

        wall_row[0] = '|';
        wall_row[NINJA_SCREEN_WIDTH] = '|';

        if (left_wall[wall_index] == '>')
        {
            wall_row[1] = '>';
            if (i == NINJA_SCREEN_HEIGHT / 2)
            {
                left_wall_spike = 1;
            }
        }

        if (right_wall[wall_index] == '<')
        {
            wall_row[NINJA_SCREEN_WIDTH - 1] = '<';
            if (i == NINJA_SCREEN_HEIGHT / 2)
            {
                right_wall_spike = 1;
            }
        }

        print_at_xy(0, i, wall_row);
    }
}

void draw_ninja()
{
    if (ninja_y >= NINJA_SCREEN_HEIGHT)
        return;

    print_at_xy(ninja_x, ninja_y, ninja);
}

void ninja_instructions()
{
    system("cls");

    /*for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(4, i + 3);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(2, i + 2);
        cout << "|";
    }

    for (int i = 0; i < SCREEN_HEIGHT - 1; i++)
    {
        gotoxy(SCREEN_WIDTH - 2, i + 3);
        cout << "|";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, SCREEN_HEIGHT);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, SCREEN_HEIGHT + 1);
        cout << "_";
    }

    for (int i = 3; i < SCREEN_WIDTH; i++)
    {
        gotoxy(i, 1);
        cout << "_";
    }

    for (int i = 5; i < SCREEN_WIDTH - 2; i++)
    {
        gotoxy(i, 2);
        cout << "_";
    }*/

    gotoxy(1, 1);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
    gotoxy(1, 2);
    cout << "  (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)";
    gotoxy(1, 3);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 4);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 5);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 6);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 7);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 8);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 9);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 10);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 11);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 12);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 13);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 14);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 15);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 16);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 17);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 18);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 19);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 20);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 21);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 22);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 23);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 24);
    cout << "  (__  _)                                                                                                     (___ _)";
    gotoxy(1, 25);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 26);
    cout << "  (__  _)                                                                                                     (__ __)";
    gotoxy(1, 27);
    cout << "  (___ _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(___ _)";
    gotoxy(1, 28);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";

    gotoxy(SCREEN_WIDTH / 2 - 36, 5);
    cout << ".-..-. .-. .----..---. .----. .-. .-. .---.  .---. .-. .----. .-. .-. .----. ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 6);
    cout << "| ||  `| |{ {__ {_   _}| {}  }| { } |/  ___}{_   _}| |/  {}  \\|  `| |{ {__   ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 7);
    cout << "| || |\\  |.-._} } | |  | .-. \\| {_} |\\     }  | |  | |\\      /| |\\  |.-._} } ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 8);
    cout << "`-'`-' `-'`----'  `-'  `-' `-'`-----' `---'   `-'  `-' `----' `-' `-'`----'  ";
    gotoxy(SCREEN_WIDTH / 2 - 36, 9);
    cout << "-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=--=x=--=x=--=x=-";

    gotoxy(SCREEN_WIDTH / 4 + 5, 12);
    cout << " _____________________________________                 ";
    gotoxy(SCREEN_WIDTH / 4 + 5, 13);
    cout << "|       __ _  _  __ __ _  _  _        |                ";
    gotoxy(SCREEN_WIDTH / 4 + 5, 14);
    cout << "|      (_ |_)|_|/  |_ |_)|_||_)       |  Press SpaceBar";
    gotoxy(SCREEN_WIDTH / 4 + 5, 15);
    cout << "|      __)|  | |\\__|__|_)| || \\       |  To Switch     ";
    gotoxy(SCREEN_WIDTH / 4 + 5, 16);
    cout << "|_____________________________________|                ";

    getch();
}

void ninja_mainmenu()
{
    gotoxy(1, 1);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
    gotoxy(1, 2);
    cout << "  (__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)";
    gotoxy(1, 3);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 4);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 5);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 6);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 7);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 8);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 9);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 10);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 11);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 12);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 13);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 14);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 15);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 16);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 17);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 18);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 19);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 20);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 21);
    cout << "  ( _ __)                                                                                                     ( _ __)";
    gotoxy(1, 22);
    cout << "  (__  _)                                                                                                     (__  _)";
    gotoxy(1, 23);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 24);
    cout << "  (__  _)                                                                                                     (___ _)";
    gotoxy(1, 25);
    cout << "  (_ ___)                                                                                                     (_ ___)";
    gotoxy(1, 26);
    cout << "  (__  _)                                                                                                     (__ __)";
    gotoxy(1, 27);
    cout << "  (___ _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(___ _)";
    gotoxy(1, 28);
    cout << "  .-=~=-.                                                                                                     .-=~=-.";
}

int main()
{
    setcursor(0, 0);
    srand((unsigned)time(NULL));
    pressprint();
    getche();
label:
    system("cls");
    windows();
    char op = getche();

    if (op == '1')
    {
        system("cls");
        loadbar();
        do
        {
            system("cls");
            setcursor(0, 0);
            srand((unsigned)time(NULL));
            system("cls");
            zombie_mainmenu();
            gotoxy(SCREEN_WIDTH / 2 - 39, 5);
            cout << "____   ___   ___  ___ ____  __  ____     __  __ __ ____  __ __ __ __ __  ___  __   ";
            gotoxy(SCREEN_WIDTH / 2 - 39, 6);
            cout << "  //  // \\\\  ||\\\\//|| || )) || ||       (( \\ || || || \\\\ || || || || || // \\\\ ||   ";
            gotoxy(SCREEN_WIDTH / 2 - 39, 7);
            cout << " //  ((   )) || \\/ || ||=)  || ||==      \\\\  || || ||_// \\\\ // || \\\\ // ||=|| ||   ";
            gotoxy(SCREEN_WIDTH / 2 - 39, 8);
            cout << "//__  \\\\_//  ||    || ||_)) || ||___    \\_)) \\\\_// || \\\\  \\V/  ||  \\V/  || || ||__|";
            gotoxy(SCREEN_WIDTH / 2 - 40, 10);
            cout << ".:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*.";

            gotoxy(SCREEN_WIDTH / 2 - 8, 14);
            cout << " .-----------. ";
            gotoxy(SCREEN_WIDTH / 2 - 8, 15);
            cout << "(| PLAY GAME |)";
            gotoxy(SCREEN_WIDTH / 2 - 8, 16);
            cout << " '-----------' ";

            gotoxy(SCREEN_WIDTH / 2 - 9, 17);
            cout << " .-------------. ";
            gotoxy(SCREEN_WIDTH / 2 - 9, 18);
            cout << "(| HOW TO PLAY |)";
            gotoxy(SCREEN_WIDTH / 2 - 9, 19);
            cout << " '-------------' ";

            gotoxy(SCREEN_WIDTH / 2 - 8, 20);
            cout << " .-----------. ";
            gotoxy(SCREEN_WIDTH / 2 - 8, 21);
            cout << "(| QUIT GAME |)";
            gotoxy(SCREEN_WIDTH / 2 - 8, 22);
            cout << " '-----------' ";
            char op = getche();
            flappy_levels();
            if (op == '1')
            {
                system("cls");
                zombie_levels();
                char level = getche();
                if (level == '1')
                {
                    zombie_levelone();
                }
                if (level == '2')
                {
                    zombie_leveltwo();
                }
                if (level == '3')
                {
                    zombie_levelthree();
                }
            }
            else if (op == '2')
            {
                zombie_instructions();
            }
            else if (op == '3')
            {
                goto label;
            }
        } while (1);
    }

    if (op == '2')
    {
        do
        {
            system("cls");
            setcursor(0, 0);
            srand((unsigned)time(NULL));
            loadbar();
            do
            {
                system("cls");
                flappy_mainmenu();

                gotoxy(SCREEN_WIDTH / 2 - 50, 5);
                cout << "/$$$$$$$  /$$$$$$$  /$$$$$$ /$$$$$$$  /$$$$$$$  /$$     /$$       /$$$$$$$  /$$$$$$ /$$$$$$$  /$$$$$$$   ";
                gotoxy(SCREEN_WIDTH / 2 - 50, 6);
                cout << "| $$__  $$| $$__  $$|_  $$_/| $$__  $$| $$__  $$|  $$   /$$/      | $$__  $$|_  $$_/| $$__  $$| $$__  $$ ";
                gotoxy(SCREEN_WIDTH / 2 - 50, 7);
                cout << "| $$  \\ $$| $$  \\ $$  | $$  | $$  \\ $$| $$  \\ $$ \\  $$ /$$/       | $$  \\ $$  | $$  | $$  \\ $$| $$  \\ $$ ";
                gotoxy(SCREEN_WIDTH / 2 - 50, 8);
                cout << "| $$  | $$| $$$$$$$/  | $$  | $$$$$$$/| $$$$$$$/  \\  $$$$/        | $$$$$$$   | $$  | $$$$$$$/| $$  | $$ ";
                gotoxy(SCREEN_WIDTH / 2 - 50, 9);
                cout << "| $$  | $$| $$__  $$  | $$  | $$____/ | $$____/    \\  $$/         | $$__  $$  | $$  | $$__  $$| $$  | $$ ";
                gotoxy(SCREEN_WIDTH / 2 - 50, 10);
                cout << "| $$  | $$| $$  \\ $$  | $$  | $$      | $$          | $$          | $$  \\ $$  | $$  | $$  \\ $$| $$  | $$";
                gotoxy(SCREEN_WIDTH / 2 - 50, 11);
                cout << "| $$$$$$$/| $$  | $$ /$$$$$$| $$      | $$          | $$          | $$$$$$$/ /$$$$$$| $$  | $$| $$$$$$$/";
                gotoxy(SCREEN_WIDTH / 2 - 50, 12);
                cout << "|_______/ |__/  |__/|______/|__/      |__/          |__/          |_______/ |______/|__/  |__/|_______/ ";

                gotoxy(SCREEN_WIDTH / 2 - 8, 15);
                cout << " .-----------. ";
                gotoxy(SCREEN_WIDTH / 2 - 8, 16);
                cout << "(| PLAY GAME |)";
                gotoxy(SCREEN_WIDTH / 2 - 8, 17);
                cout << " '-----------' ";

                gotoxy(SCREEN_WIDTH / 2 - 9, 18);
                cout << " .-------------. ";
                gotoxy(SCREEN_WIDTH / 2 - 9, 19);
                cout << "(| HOW TO PLAY |)";
                gotoxy(SCREEN_WIDTH / 2 - 9, 20);
                cout << " '-------------' ";

                gotoxy(SCREEN_WIDTH / 2 - 8, 21);
                cout << " .-----------. ";
                gotoxy(SCREEN_WIDTH / 2 - 8, 22);
                cout << "(| QUIT GAME |)";
                gotoxy(SCREEN_WIDTH / 2 - 8, 23);
                cout << " '-----------' ";
                char op = getche();
                flappy_levels();
                if (op == '1')
                {
                    system("cls");
                    flappy_levels();
                    char level = getche();
                    if (level == '1')
                    {
                        flappy_levelone();
                    }
                    if (level == '2')
                    {
                        flappy_leveltwo();
                    }
                    if (level == '3')
                    {
                        flappy_levelthree();
                    }
                }
                else if (op == '2')
                {
                    flappy_instructions();
                }
                else if (op == '3')
                {
                    goto label;
                }
            } while (1);

            return 0;
        } while (1);
    }

    if (op == '3')
    {
        do
        {
            system("cls");
            setcursor(0, 0);
            srand((unsigned)time(NULL));
            loadbar();
            do
            {
                system("cls");
                ninja_mainmenu();
                gotoxy(SCREEN_WIDTH / 2 - 43, 5);
                cout << " _     _  _______  _     _  ______   _____        ___    _       _______   __   __   _____  ";
                gotoxy(SCREEN_WIDTH / 2 - 43, 6);
                cout << "(_)   (_)(_______)(_)   (_)(______) (_____)     _(___)_ (_)     (_______) (__)_(__) (_____) ";
                gotoxy(SCREEN_WIDTH / 2 - 43, 7);
                cout << "(__)_ (_)   (_)   (__)_ (_)     (_)(_)___(_)   (_)   (_)(_)        (_)   (_) (_) (_)(_)__(_)";
                gotoxy(SCREEN_WIDTH / 2 - 43, 8);
                cout << "(_)(_)(_)   (_)   (_)(_)(_) _   (_)(_______)   (_)    _ (_)        (_)   (_) (_) (_)(_____) ";
                gotoxy(SCREEN_WIDTH / 2 - 43, 9);
                cout << "(_)  (__) __(_)__ (_)  (__)( )__(_)(_)   (_)   (_)___(_)(_)____  __(_)__ (_)     (_)(_)__(_)";
                gotoxy(SCREEN_WIDTH / 2 - 43, 10);
                cout << "(_)   (_)(_______)(_)   (_) (____) (_)   (_)     (___)  (______)(_______)(_)     (_)(_____) ";

                gotoxy(SCREEN_WIDTH / 2 - 8, 14);
                cout << " .-----------. ";
                gotoxy(SCREEN_WIDTH / 2 - 8, 15);
                cout << "(| PLAY GAME |)";
                gotoxy(SCREEN_WIDTH / 2 - 8, 16);
                cout << " '-----------' ";

                gotoxy(SCREEN_WIDTH / 2 - 9, 17);
                cout << " .-------------. ";
                gotoxy(SCREEN_WIDTH / 2 - 9, 18);
                cout << "(| HOW TO PLAY |)";
                gotoxy(SCREEN_WIDTH / 2 - 9, 19);
                cout << " '-------------' ";

                gotoxy(SCREEN_WIDTH / 2 - 8, 20);
                cout << " .-----------. ";
                gotoxy(SCREEN_WIDTH / 2 - 8, 21);
                cout << "(| QUIT GAME |)";
                gotoxy(SCREEN_WIDTH / 2 - 8, 22);
                cout << " '-----------' ";
                char op = getche();
                if (op == '1')
                {
                    system("cls");
                    ninja_play();
                }
                else if (op == '2')
                {
                    system("cls");
                    ninja_instructions();
                }
                else if (op == '3')
                {
                    goto label;
                }
            } while (1);

            return 0;
        } while (1);
    }
    return 0;
}


