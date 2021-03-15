#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[2][3],b[2][3],c[2][3];
    printf("Enter First Elements(2 X 3): \n");
    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
          scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Second Elements(2 X 3): \n");
    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
          scanf("%d",&b[i][j]);
        }
    }

    printf("Before Additions Elements(2 X 3): \n");
    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("------\n");
    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
          printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter Additions Elements(2 X 3): \n");
    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
          printf("%d ",c[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }
return 0;
}
