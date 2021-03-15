#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[20] = "Justin Roy World";
    int b = strlen(a);
    for(int i=0;i<b;i++){
        if(a[i]=='W'){
          printf("%c",a[i]);
        }
    }
return 0;
}
