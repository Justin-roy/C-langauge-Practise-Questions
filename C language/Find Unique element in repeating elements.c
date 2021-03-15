#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        counter = counter^arr[i];
    }
    printf("Unique Number: %d",counter);
    return 0;
}
