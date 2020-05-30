#include<stdio.h>
void main()
{
	int small=0,pos=0,temp=0,i,j,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Element %d = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		small=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(small>arr[j])
			{
				small=arr[j];
				pos=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
	}
		
	printf("\nSorted Array using selection sort is\n");
	for(i=0;i<n;i++)
	{
		printf("\nElement %d = %d\n",i,arr[i]);
	}
}
