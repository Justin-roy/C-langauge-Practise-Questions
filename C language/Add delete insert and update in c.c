#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Insert,Delete,Upadate,sort
void Display(int arr[], int n)
{
    //Traversal.....
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void Sorting(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            }
        }
    }
    printf("Sorted Array are: ");
    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}
int Insert(int arr[],int n,int Ele,int idx)
{
       for(int i=n-1;i>=idx;i--){
        arr[i+1] = arr[i];
       }
      arr[idx] = Ele;
      return 1;
}
int Deletion(int arr[],int n,int idx_Position)
{
    for(int i=idx_Position-1;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //int size = sizeof(arr[0]) / sizeof(arr[n-1]);
    Display(arr,n);
    // Insert..
    int Ele;
    printf("Enter Element You Want To Insert: ");
    scanf("%d",&Ele);
    int idx;
    printf("Enter Index Position You Want To Insert(0 to %d): ",n-1);
    scanf("%d",&idx);
    Insert(arr,n,Ele,idx);
    ++n;
    Display(arr,n);
    int idx_Position;
    printf("Enter the Element Position You Want to Delete(1 to %d): ",n);
    scanf("%d",&idx_Position);
    Deletion(arr,n,idx_Position);
    --n;
    Display(arr,n);
    Sorting(arr,n);
return 0;
}
