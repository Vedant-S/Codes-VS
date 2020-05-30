#include<iostream>
using namespace std;
class MATRIX
{private:
	unsigned short int size;
	int TABLE[10][10];
	public:
	void process()
	{
		int c=0,i,j;
		if(TABLE[i][j]==TABLE[j][i])
		{c=1;
		}
		if(c==0)
	{
		cout<<"Not a Symetric Matrix"<<endl;
	}

	 else 
	 cout<<"It is Symmetric"<<endl;
}

//	public:
	MATRIX()
	{ int row,col;
		cout<<"Enter Size";
		cin>>row;
		cin>>col;
		cout<<"Enter the elements of matrix"<<endl;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			cin>>TABLE[i][j];
			process();			
		}
	}
};

int main()
{ MATRIX m;
	m.process();
}

