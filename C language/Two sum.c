#include <stdio.h>
#include <stdlib.h>
void Find(int arr[],int n,int tar)
{
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]+arr[j]==tar)
            printf("%d %d",i,j);
       }
    }
}
int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Element:\n");
    for(int i=0;i<n;i++)
      {
         scanf("%d",&arr[i]);
      }
    int tar;
    printf("Enter Target: ");
    scanf("%d",&tar);
    Find(arr,n,tar);
return 0;
}
