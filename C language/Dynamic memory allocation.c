#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    //scanf("%d",&ptr);
    printf("Ptr--> %d",ptr);

return 0;
}
