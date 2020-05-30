#include<iostream>
using namespace std;
class NUMBER
{
	short unsigned int num;
	public:
	NUMBER()
	{
	cout<<"enter the number"<<endl;
	cin>>num;
	int a=num;
	int t,d;
	t=num;
	num=0;
	while(t>0)
	{
		d=t%10;
		num=num*10+d;
		t=t/10;
		}
	if(num==a)
	{
		cout<<endl<<"palindrome";
    }  
  else 
  {
	 cout<<endl<<"not a palindrome.";
  }
  }
  };
int main()
{ NUMBER c;
return 0;
}


	
	
