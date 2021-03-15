#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
int main()
{
    int a[N][N],b[N][N],c[N][N],sum;
    printf("Enter First Elements(%d X %d): \n",N,N);
    for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
          scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Second Elements(%d X %d): \n",N,N);
    for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
          scanf("%d",&b[i][j]);
        }
    }

    printf("Before Multiplication Elements (%d X %d): \n",N,N);
    for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("------\n");
    for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
          printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    //Multiplication Process(N X N)
    for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
            sum=0;
        for(int k=0;k<N;k++)
          sum+=a[i][k]*b[k][j];
          c[i][j] = sum;
          }
    }

    printf("\nAfter Multiplication Elements (%d X %d): \n",N,N);
    for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
return 0;
}

