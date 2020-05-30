#include<stdio.h>
int fact(int);
int main()
{
	int num,f;
	printf("\nEnter A Number:");
	scanf("%d",&num);
	f=fact(num);
		printf("\a\nFactorial of %d is: %d",num,f);
		return 0;
}

int fact(int n)
{
	if(n==1)
	return 1;
	else
	return(n*fact(n-1));
}
