#include <stdio.h>
int main()
{
    char a[34];
    char b[15] = "I love U";
    printf("Enter your name ");
//    printf("Your name is: %s %s",b,a);
    gets(a);//scan
    system("CLS");
    puts(a);//print
    puts(b);
return 0;
}
