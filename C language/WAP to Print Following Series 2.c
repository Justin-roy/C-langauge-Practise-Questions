#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 5 7 10 14 19 25
// 1 2 3  4  5  6
int main()
{
   int temp;
   for(int i=1;i<=6;i++)
   {
       temp = 4 + i*(i+1)/2;
       printf("%d ",temp);
   }
return 0;
}
