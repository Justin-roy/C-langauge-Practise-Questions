#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
   int x;
   printf("Enter Any number: ");
   scanf("%d",&x);
  float sum;
  for(int i=1;i<=4;i++)
  {
      if(i%2==0)
      {
          sum=(-1)*1/pow(x,i);
          printf("%.3f ",sum);
      }
      else
      {
          sum=1/pow(x,i);
          printf(" %.3f ",sum);
      }

  }
return 0;
}
