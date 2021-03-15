#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Write a Program to accept any sentence from the user then print....
/*
1.Total no. of character
2.Total no. of Vowel
3.Total no. of Consonant
4.Total no. of Space
5.Total no. of Numeric value
6.Total no. of Special character
*/
void ChkVowel_conso_space(char string[])
{
     int j=0,counter=0,vow=0,cons=0;
    while(string[j]!='\0')
    {
        if(string[j]==' '){
            counter++;
        }
        else if(string[j]=='a'|| string[j]=='e'||string[j]=='i'||string[j]=='o'||string[j]=='u')
        {
            vow++;
        }
        else
        {
            cons++;
        }
        j++;
    }
     printf("\nNumber of Vowel is %d ",vow);
      printf("\nNumber of Consonant is %d ",cons);
        printf("\nNumber of Space is %d ",counter);
}
void TochkSpecialchar(char string[])
{
    int special=0;
    for(int i=0;string[i];i++){
       if(string[i]>=33 && string[i]<=47)
       special++;
    }
    printf("\nNumber of Special Character is %d",special);
}
void TochkNumeric(char string[])
{
    int numeric=0;
    for(int i=0;string[i];i++){
       if(string[i]>=48 && string[i]<=57)
       numeric++;
    }
    printf("\nNumber of Numeric Value of is %d",numeric);
}
int main()
{
    char string[100];
    printf("Enter Any String: ");
    gets(string);
    int n = strlen(string);
    printf("\nNumber of Character is %d",n);
    // To Checking Vowel and Consonant and Space..
    ChkVowel_conso_space(string);
    // To Checking Special character......
    TochkSpecialchar(string);
    // To Numeric Value..........
    TochkNumeric(string);
return 0;
}
