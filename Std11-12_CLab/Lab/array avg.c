#include<stdio.h>
int main( )
{
	int arr[50],i,sum=0,n;
	float avg=0.0;
	printf("Enter the number of element U want to enter:");
	scanf("%d",&n);
	printf("\nEnter %d elements to the array arr:",n);
	for(i=0;i<n;i++)	
		scanf("%d",&arr[i]);		//reading the array elements
	for(i=0;i<n;i++)
		sum=sum+arr[i];
	avg = sum/n;
	printf("\nThe array elements are:\t");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);		//displaying the array elements
	printf("\nThe sum of elements =%d",sum);
	printf("\nThe average of elements =%f",avg);
	return 0;
}
 
 
