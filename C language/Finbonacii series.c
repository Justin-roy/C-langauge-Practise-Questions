#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 0 1 1 2 3 5 8
int main()
{
    int i,temp,a=0,b=1;
    printf("0  1 ");
    for(i=0;i<5;i++){
         temp = a + b;
         a = b;
         b = temp;
        printf(" %d ",temp);
    }
return 0;
}
