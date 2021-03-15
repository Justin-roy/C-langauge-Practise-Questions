#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1,j=3;
    while(i<5)
    {
        i++;
        if(j==0)
            break;
        j--;
    }
    printf("%d %d",i,j);
return 0;
}
