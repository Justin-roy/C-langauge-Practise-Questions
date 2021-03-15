#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    time(&t);
    printf("Time = %s",ctime(&t));
return 0;
}
