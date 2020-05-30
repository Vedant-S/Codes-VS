#include<stdio.h>//Sum Of Rows & Columns
void main(){
	int m,n,i=0,j=0,sum=0;
	printf("Enter Dimensions Of The Matrix:\nRows:");
	scanf("%d",&m);
	printf("Columns:");
	scanf("%d",&n);
	
	int ar[m][n],row[m],col[n];
	                                    
	printf("\n");
	
	for(i=0;i<m;i++){//Loop To Input Elements
		for(j=0;j<n;j++)
		{
			printf("Enter Element Of Index[%d][%d] = ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++){//Array To Add Rows
		for(j=0;j<n;j++)
		{
			sum+=ar[i][j];           
		}
		row[i]=sum;
		sum=0;
	}
	
	printf("\n");
	
	for(i=0;i<m;i++){//Array To Print Sum Rows
			printf("Sum Of Row %d = %d\n",i+1,row[i]);
		
	}
	
	printf("\n");sum=0;
		
	for(j=0;j<n;j++)//Array To Add Columns
		{
		for(i=0;i<m;i++){
			sum+=ar[i][j];
		}
		col[j]=sum;
		sum=0;
	}
	
	for(i=0;i<n;i++){//Array To Print Sum Of Columns
			printf("Sum Of Column %d = %d\n",i+1,col[i]);
		
	}
	
}
