#include<iostream>
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class FILES
{
	char cou[50],cap[50];int n;
	void creation()
	{
		cout<<"Enter the number of entries ";
		cin>>n;
		ofstream fout1,fout2;
		fout1.open("country.txt");
		fout2.open("capital.txt");
		for(int i=0;i<n;i++)
		{
			cout<<"Enter the country"<<endl;
			cin>>cou;
			fout1<<cou<<endl;
			cout<<"Enter the capital"<<endl;
			cin>>cap;
			fout2<<cap<<endl;
			
		}
		fout1.close();
		fout2.close();
	}
	void show()
	{
		ifstream fin1,fin2;
		cout<<"Country"<<setw(30)<<"Capital"<<endl;
		fin1.open("country.txt");
		fin2.open("capital.txt");
		for(int i=0;i<n;i++)
		{
			fin1>>cou;
			fin2>>cap;
			cout<<cou<<setw(30)<<cap<<endl;
		}
	}
	public:
		FILES()
		{
			int ch;
			cout<<"Enter the operation:-"<<endl;
			cout<<"1.Write data to file"<<endl;
			cout<<"2.Read data to file"<<endl;
			cout<<"3.Exit";
			cin>>ch;
			switch(ch)
			{
				case 1:creation();
				break;
				case 2:show();
				break;
				case 3:break;
				default:cout<<"Wrong choice enter again";
				break;
			}
			
		}
	
};
int main()
{
	char ans='y';
	do
	{
		FILES t;
		cout<<"do you wish to continue";
		cin>>ans;
		
	}while(ans=='y');
	return 0;
}

