#include <stdio.h>

void main()
{
    int i, mx, mn;
    int arr[5] = {1,5,68,0,5};
    mx = arr[0];
    mn = arr[0];
    for(i=1; i<5; i++)
    {
        if(arr[i]>mx)
        {
            mx = arr[i];
        }
        if(arr[i]<mn)
        {
            mn = arr[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}
