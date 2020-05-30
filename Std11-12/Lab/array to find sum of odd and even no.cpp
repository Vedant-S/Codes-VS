#include<iostream>
using namespace std;
class ARRAY
{
	private:
		short int list[30];
		short unsigned int N;
		void show();
		void process();
		public:
			ARRAY()
			{
				int i;
				cout<<"Enter N"<<endl;
				cin>>N;
				cout<<"Enter elements of list "<<endl;
				for(i=0;i<N;i++)
				{
					cin>>list[i];
				}
				show();
				process();
			}
};
void ARRAY::process()
{
	int sum,product,i;
	for(i=0,sum=0,product=1;i<N;i++)
	{
		if(list[i]%2==0)
		{
			sum=sum+list[i];
		}
		else
		{
			product=product*list[i];
		}
	}
	cout<<"The sum of all even numbers is: "<<sum<<endl;
	cout<<"The product of all odd numbers is: "<<product<<endl;
}
void ARRAY::show()
{
	int i;
	cout<<"The contents of the list are-"<<endl;
	for(i=0;i<N;i++)
	{
		cout<<list[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ARRAY a;
	return 0;
}

