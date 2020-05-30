#include<iostream>
using namespace std;
class BINARY
{	private:
	short int list[30];
	short unsigned int N;
	void search()
	{
		int num;
		int min=0,max=N-1,mid,flag=0,k=N;
		cout<<"Enter the element to be searched: ";
		cin>>num;
		while(list[min]>=num&&flag==0)
		{
			mid=(min+max)/2;
			if(list[mid]==num)
			{
				cout<<"The element is at position: "<<mid+1<<endl;
				flag=1;
			}
			else if (list[mid]>num)
			{
				min=mid+1;
			}
		    else
			{
				max=mid-1;
			}
		}
	if(flag==0)
	{
		cout<<"Element Not Found";
	}
	}
	public:
	BINARY()
	{
		cout<<"Enter the size of array: ";
		cin>>N;
		cout<<"Enter elements of array in descending order"<<endl;
		for (int i=0;i<N;i++)
		{
			cin>>list[i];
		}
		search();
}
};
	int main()
	{
		BINARY b;
		return 0;
	}

