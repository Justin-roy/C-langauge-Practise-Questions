#include<stdio.h>

int main(){
int N,i=0,j=0,f=0;
printf("Enter the Value of N: ");
scanf("%d",&N);
for(i=1,j=0;i<=N,j<=i*2;i++,j++){
    if(i==N){
    f=1;
     break;
     }
     else if(j==N)
     { f=2;
     break;
}
}
    if(f==1)
    printf("Patlu");
    else if(f==2)
    printf("Motu");

}
