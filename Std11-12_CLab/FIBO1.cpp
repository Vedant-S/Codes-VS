#include<iostream>
using namespace std;

class FIBO{
	unsigned short int N;
	
	public:
		
		FIBO()
		{
			cout<<"Enter the number to check for Fibonacci Number"<<endl;
			cin>>N;
			int a,b,n,ctr=0,d=(N*N),i,m;
			a=(5*d)+4;
			b=(5*d)-4;
			for(i=1;a>=(i*i);i++)
			{
				if(a==i*i)
				{ctr++;}
			}
            for(i=1;b>=(i*i);i++)
			{
				if(b==i*i)
				{ctr++;}

			}	
			if(ctr==0)
			{cout<<"The number "<<N<<" is not Fibonacci Number"<<endl;}
			else
			{cout<<"The number "<<N<<" is a Fibonacci Number"<<endl;}
		}
		
};


int main()
{
	FIBO f1;
	
	return 0;
}

