#include<stdio.h>//Transpose Matrix
void main(){
	int m,n,i=0,j=0;;
	printf("Enter Dimensions Of The Matrix:\nRows:");
	scanf("%d",&m);
	printf("Columns:");
	scanf("%d",&n);
	
	int ar1[m][n],ar2[n][m];
	
	printf("\n");
	
	for(i=0;i<m;i++){//Loop To Input Elements
		for(j=0;j<n;j++)
		{
		
			printf("Enter Element Of Index[%d][%d] = ",i,j);
			scanf("%d",&ar1[i][j]);
		}
	}
	
	printf("\n");
	 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			printf("%d\t",ar1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++){//Loop To Transpose Matrix
		for(j=0;j<n;j++)
		{
			ar2[j][i]=ar1[i][j];
		}
	}
	
	printf("\nTransposed Matrix:\n");
	
	for(i=0;i<n;i++){//Loop To Print Transposed Matrix
		for(j=0;j<m;j++)
		{
			printf("%d\t",ar2[i][j]);
		}
		printf("\n");                                                                                                                                                                                                                                                                                                                               
	}
	
}
