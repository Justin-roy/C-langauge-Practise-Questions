#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x;
    float sum,sum1;
    printf("Enter the value of X: ");
    scanf("%d",&x);

    for(int i=1;i<=4;i++)
    {
        if(i%2==0){
        sum = (-1)*1/pow(x,i);
        printf("%.2f ",sum);
        }
        else{
        sum1 = 1/pow(x,i);
        printf(" %.2f ",sum1);
        }
    }
    float total;
    total =sum+sum1;
    printf("\nSum: %.2f",total);
return 0;
}
