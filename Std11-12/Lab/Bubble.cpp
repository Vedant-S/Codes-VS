#include <iostream>
using namespace std;
class bubble
{
	short list[30];
	unsigned n;
	void sort();
	void show();
	public:
		bubble()
		{cout<<"Enter number of elements"<<endl;
		cin>>n;
		cout<<"Enter elements"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>list[i];
		}
		sort();
		cout<<"The sorted array is";
		show();		}};

void bubble::sort()
{
	int i,temp,j;
	for(i=0;i<n-1;i++)
	{for(j=0;j<n-i-1;j++)
	{if(list[j]>list[j+1])
	{
		temp=list[j];
		list[j]=list[j+1];
		list[j+1]=temp;
		}	}	}}
		
		void bubble::show()
		{
			for(int i=0;i<n;i++)
			{cout<<list[i]<<" ";
			}
		}
		int main()
		{
			bubble b;
			return 0;
		}
