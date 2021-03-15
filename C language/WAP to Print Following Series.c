#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Series 1,3,7,13,21
//        1 2 5 6  8
//        i a b c d
int main()
{
    int temp;
    for(int n=1;n<=5;n++){
         temp = (n*n)-(n-1);
        printf("%d ",temp);
    }
return 0;
}
