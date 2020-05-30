#include<iostream>
using namespace std;
class ARRAY
{
	short int list[30];
	short unsigned int N;
	void process()
	{
		short int num;
		int ctr=0;
		num=list[0];
		for(int i=0; i<N;i++)
		{
			if(list[i]>num)
			{
				num=list[i];
				ctr=i;
			}
		}
		cout<<"   The largest Number in the array is : "<<num<<"\n   located at positon : "<<ctr+1;
	}
	public:
		ARRAY()
		{
			cout<<"Enter size of array \n";
			cin>>N;
			cout<<"Enter elements of array\n";
			for(int i=0;i<N; i++)
			cin>>list[i];
			process();
		}
};
int main()
{
	ARRAY a;
	return 0;
}


