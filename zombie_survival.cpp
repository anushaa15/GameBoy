#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>


#define WIN_WIDTH 70
#define WIN_HEIGHT 80
#define SCREEN_HEIGHT 80


using namespace std;


HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;


char man[3][3] = {
    {' ', '@', ' '},
    {' ', '@', ' '},
    {' ', '@', ' '}};


int manPosX = WIN_WIDTH / 2;
int manPosY = WIN_HEIGHT / 2;
int bullets[20][4];
int bulletsLife[20];
int bIndex = 0;
int enemyY[3];
int enemyX[3];
int enemyFlag[3];
int score = 0;


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
    SetConsoleCursorInfo(console, &lpCursor);
}


void drawMan()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            gotoxy(j + manPosX, i + manPosY);
            cout << man[i][j];
        }
    }
}


void eraseMan()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            gotoxy(j + manPosX, i + manPosY);
            cout << " ";
        }
    }
}


void genBullet()
{
    bullets[bIndex][0] = manPosY;
    bullets[bIndex][1] = manPosX + 1;
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


int collision()
{
    if (enemyY[0] + 4 >= 23)
    {
        if (enemyX[0] + 4 - manPosX >= 0 && enemyX[0] + 4 - manPosX < 8)
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


void gameover()
{
    system("cls");
    cout << endl;
    cout << "\t\t--------------------------" << endl;
    cout << "\t\t-------- Game Over -------" << endl;
    cout << "\t\t--------------------------" << endl
         << endl;
    cout << "\t\tPress any key to go back to menu.";
    getch();
}


void updateScore()
{
    gotoxy(WIN_WIDTH + 7, 5);
    cout << "Score: " << score << endl;
}


void play()
{
    manPosX = -1 + WIN_WIDTH / 2;
    manPosY = -1 + WIN_WIDTH / 2;
    enemyFlag[0] = 1;
    enemyFlag[1] = 1;
    enemyY[0] = enemyY[1] = 4;


    system("cls");
    genEnemy(0);
    genEnemy(1);
    updateScore();


    for (int i = 0; i < 20; i++)
    {
        bullets[i][0] = bullets[i][1] = 0;
    }


    gotoxy(WIN_WIDTH + 7, 2);
    cout << "Car Game";
    gotoxy(WIN_WIDTH + 6, 4);
    cout << "----------";
    gotoxy(WIN_WIDTH + 6, 6);
    cout << "----------";
    gotoxy(WIN_WIDTH + 7, 12);
    cout << "Control ";
    gotoxy(WIN_WIDTH + 7, 13);
    cout << "-------- ";
    gotoxy(WIN_WIDTH + 2, 14);
    cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 2, 15);
    cout << " D Key - Right";


    gotoxy(18, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(18, 5);
    cout << "                      ";


    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 'a' || ch == 'A')
            {
                // if (manPos > 18)
                manPosX -= 1;
            }
            if (ch == 'd' || ch == 'D')
            {
                // if (manPos < 50)
                manPosX += 1;
            }
            if (ch == 'w' || ch == 'W')
            {
                // if (manPos > 18)
                manPosY -= 1;
            }
            if (ch == 's' || ch == 'S')
            {
                // if (manPos < 50)
                manPosY += 1;
            }
            if (ch == 32)
            {
                genBullet();
            }
        }
        drawMan();
        Sleep(50);
        eraseMan();
        drawBullets();
        drawEnemy(0);
        drawEnemy(1);
        if (collision() == 1)
        {
            gameover();
            return;
        }
        if (bulletHit() == 1)
        {
            score++;
            updateScore();
        }


        Sleep(50);
        eraseMan();
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


void instructions()
{
    system("cls");
    cout << "Instructions";
    cout << "\n----------------";
    cout << "\n Avoid Cars by moving left or right. ";
    cout << "\n\n Press 'a' to move left";
    cout << "\n Press 'd' to move right";
    cout << "\n Press 'escape' to exit";
    cout << "\n\nPress any key to go back to menu";
    getch();
}
int main()
{
    setcursor(0, 0);
    srand((unsigned)time(NULL));


    do
    {
        system("cls");
        gotoxy(10, 5);
        cout << " -------------------------- ";
        gotoxy(10, 6);
        cout << " |        Car Game        | ";
        gotoxy(10, 7);
        cout << " --------------------------";
        gotoxy(10, 9);
        cout << "1. Start Game";
        gotoxy(10, 10);
        cout << "2. Instructions";
        gotoxy(10, 11);
        cout << "3. Quit";
        gotoxy(10, 13);
        cout << "Select option: ";
        char op = getche();


        if (op == '1')
            play();
        else if (op == '2')
            instructions();
        else if (op == '3')
            exit(0);


    } while (1);
    return 0;
}





