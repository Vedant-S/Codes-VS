#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char rev;
    printf("Enter any string : ");
    scanf("%s",str);
//   gets(str);
    rev = strrev(str);
//   puts(rev);
    printf("Reverse string is : %s",*rev);
   
    return 0;
}
