#include <stdio.h>
 
int main()
{
	int l,sp,p,n,no;
	printf("Enter the number");
    scanf("%d",&no);
    //n=no;
    for(l=1;l<=no;l++)
    {
    	for(p=1;p<=l;p++)
    	{
    		printf("%d ",l);//p---*
    	}
    	printf("\n");
     }
	return 0; 
}
