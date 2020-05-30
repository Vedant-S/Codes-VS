#include<iostream>
using namespace std;
class SMALL
{
	short int A,B,C;
	void process()
	{
		short int S;
		if(A<=B&&A<=C)
		{
			S=A;
		}
		if(B<=A&&B<=C)
		{
			S=B;
		}
		if(C<=B&&C<=A)
		{
			S=C;
		}
		cout<<endl<<"The smallest value is :"<<S;
	}
	public:
		SMALL()
		{
			cout<<"Enter the value for A:";
			cin>>A;
			cout<<"Enter the value for B:";
			cin>>B;
			cout<<"Enter the value for C:";
			cin>>C;
			process();
		}
};
int main()
{
	SMALL s1;
	return 0;
}

