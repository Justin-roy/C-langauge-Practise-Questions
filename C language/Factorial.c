#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,fact=1;
    printf("Enter any number to find factorial: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact*=i;
    }
     printf("%d ",fact);
return 0;
}
