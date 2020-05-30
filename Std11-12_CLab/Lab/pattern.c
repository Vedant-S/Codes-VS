#include <stdio.h>
 
int main()
{
	int l,sp,p,n,no;
	printf("Enter the number");
    scanf("%d",&no);
    n=no;
    for(l=1;l<=no;l++)
  {
	for(sp=1;sp<=n;sp++)
    {
	printf(" ");
    		
	}
   	n--;
    	for(p=1;p<=l;p++)
    		{
    			printf("%d ",p);//*---p---p*r---%d without space---l---sp---comment 1st for loop
			}
          	printf("\n");
	}
	
}
