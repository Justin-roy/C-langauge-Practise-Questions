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
    char n[20];
    printf("Enter User Name: ");
    scanf("%s",&t);
    printf("Enter Password: ");
    scanf("%s",&n);
    if(strcmp(t,"Justin")==0 && strcmp(n,"00")==0)
    {
        printf("Correct User Name And Password\n");
        printf("Sum = %d",sum);
    }
    else
        printf("\nIncorrect User Name And Password");

return 0;
}

