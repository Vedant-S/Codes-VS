#include<iostream>
using namespace std;

class ARRAY
{
	private:
		short int list[30];
		short unsigned int N;
		
		void process();
		
	public:
		ARRAY()
		{
			cout<<"Enter the no. of elements to be accepted: ";
			cin>>N;
			cout<<"Enter the elements: ";
			for(int i=0; i<N; i++)
			{
				cin>>list[i];
			}
			process();
		}
};

void ARRAY::process()
{
	int x,p;
	x=list[0];
	for(int i=0; i<N; i++)
	{
		while(x<list[i])
		{
			x=list[i];
			p=i+1;
		}
	}
	cout<<"The largest element in the array is "<<x;
	cout<<"\nIts position is "<<p<<" from the beginning";
}

main()
{
	ARRAY a1;
}


