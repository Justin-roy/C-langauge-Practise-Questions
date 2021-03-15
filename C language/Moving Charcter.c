#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <process.h>
void gotoxy(int x,int y)
{
    COORD CRD;
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}
int main()
{
    int x = 0, y = 0;
    gotoxy(x,y);
    char ch;
    printf("Created By Justin Roy");
    while(1)
    {
        ch=getch();
        if(ch==75)
            x-=1;
        else if(ch==77)
            x+=1;
        else if(ch==72)
            y-=1;
        else if(ch==80)
            y+=1;
        else if(ch==27)
            exit(0);
       gotoxy(x,y);
    printf("*********#");
    }
    system("pause>0");
return 0;
}

