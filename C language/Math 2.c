#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int total =0;
    int x;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    for(int i=1;i<=5;i++)
    {
        total +=pow(x,i);
    }
    printf("\nTotal = %d",total);
return 0;
}
