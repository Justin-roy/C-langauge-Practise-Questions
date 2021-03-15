#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n;
    printf("Enter Number to Check Int or Float: ");
    scanf("%lf",&n);
    int i = (int) n;
    (i==n) ? printf("Number is Interger") : printf("Number is Float");
return 0;
}
