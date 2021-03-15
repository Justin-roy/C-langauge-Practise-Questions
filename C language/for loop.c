#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,max;
    printf("Enter the Value of A & B (0-9): ");
    scanf("%d %d",&a,&b);
    char *s[] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
            printf("%s\n",s[i-1]);
            i%2==0?printf("Even\n"):printf("Odd\n");
    }
return 0;
}
