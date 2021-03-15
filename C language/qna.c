#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=10;
    a = a++;//11
    a=a++ * a--;//110
    printf("%d\n",a);
    printf("%d\n",a++ * a++);//11*110
return 0;
}
