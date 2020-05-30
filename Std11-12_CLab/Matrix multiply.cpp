#include<iostream>
using namespace std;

class MATRIX{
	unsigned short int M,N,Q;
	int A[10][10],B[10][10],C[10][10];
	
	public:
		MATRIX()
		{
			cout<<"Enter the dimensions of the array A"<<endl;
			cin>>M>>N;
			cout<<"Enter the dimensions of the array B"<<endl;
			cin>>Q;
			int i,j;
			cout<<"Enter the elements "<<M<<"*"<<N<<" of the Array A "<<endl;
			for(i=0;i<M;i++)
			{for(j=0;j<N;j++)
			{
				cin>>A[i][j];
			}
		}
			
			cout<<"Enter the elements "<<N<<"*"<<Q<<" of the Array B "<<endl;
			for(i=0;i<N;i++)
			{for(j=0;j<Q;j++)
			{cin>>B[i][j];}
			}
			
		product();
			
		}
		
		void product();
};

void MATRIX :: product()
{
	int sum=0,i,j,k;
	for(i=0;i<M;i++)
	{for(j=0;j<Q;j++)
	{for(k=0;k<N;k++)
	{
		sum=sum + A[i][k]*B[k][j];
	}
	C[i][j]=sum;sum=0;
	}
		
	}
	
		cout<<"The Product Matrix is :"<<endl;
			for(i=0;i<M;i++)
			{for(j=0;j<Q;j++)
			{cout<<C[i][j]<<"\t";}
			
			cout<<endl;
			}
}
	


int main()
{
	MATRIX m;
	
	return 0;
}

