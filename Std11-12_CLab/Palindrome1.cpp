#include<iostream>
using namespace std;

class NUMBER
{
	private:
			short unsigned int num;
			
	public:
			NUMBER(int a)
			{
				num=a;
				int rev;
				rev=0;
				while(num!=0)
				{
					rev=rev*10;
					rev=rev+(num%10);
					num=num/10;
				}
				
				if(rev==a)
				{
					cout<<a<<" is a palindrome";
					
				}
				
				else
				{
					cout<<a<<" is NOT a palindrome";
				}
			}
};

int main()
{
	cout<<"Enter a number:";
	int inp;
	cin>>inp;
	NUMBER a1(inp);
	return 1;
}


