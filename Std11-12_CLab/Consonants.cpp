#include<iostream>
using namespace std;
class TEXT
{
	private:
	char LINE[80];
	public:TEXT()
	{
		int cons;
		cons=0;
		cout<<"enter line"<<endl;
		cin.getline(LINE,80);
		for(int i=0;LINE[i]!='\0';++i)
		{
			if((LINE[i]!='a')&&(LINE[i]!='e')&&(LINE[i]!='i')
			&&(LINE[i]!='o')&&(LINE[i]!='u')&&(LINE[i]!='A')&&(LINE[i]!='E')&&(LINE[i]!='I')
			&&(LINE[i]!='O')&&(LINE[i]!='U')&&(LINE[i]!=' '))
			{
				++cons;
			}
		}
	cout<<"total number of consonants is =";
	cout<<cons<<endl;
	};
	
	
};
int main()
{
TEXT t1;
return 0;
}

