#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0;
	printf("Enter string\n");
	gets(str);
	//while(str[i]!='\0')
	{
		i++;
	}
    i=strlen(str);
	printf("Length is %d\n",i);
}
