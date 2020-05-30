#include<iostream>
using namespace std;
class SELECT
{
	private:
		short int list[30];
		short unsigned int N;
		void sort(void);
		void show(void);
		public:
			SELECT(void)
			{
				int i;
				cout<<"Enter N"<<endl;
				cin>>N;		
				cout<<"Enter elements of list "<<endl;
				for(i=0;i<N;i++)
				{
					cin>>list[i];
				}
				sort();
				show();
			}
};
void SELECT::sort(void)
{
	int j,pos,i;
	short int min,temp;
	for(i=0;i<N;i++)
	{
		min=list[i];
		pos=i;
		for(j=i;j<N;j++)
		{
			if(list[j]<min)
			{
				min=list[j];
				pos=j;
			}
		}
		temp=list[pos];
		list[pos]=list[i];
		list[i]=temp;	
	}
}
void SELECT::show(void)
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
	SELECT a;
	return 0;
}


