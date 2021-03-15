#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,sum;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    char t[20];
    printf("Enter Password: ");
    scanf("%s",&t);
    if(strcmp(t,"Justin")==0)
    {
        printf("Correct Password\n");
        printf("Sum = %d",sum);
    }
    else
        printf("\nIncorrect Password");

return 0;
}
