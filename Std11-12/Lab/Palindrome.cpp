#include<math.h>
#include<iostream>
using namespace std;
class number
{
private :
	short int num;
	public:
		 number()
		{ cout<<"enter the number"<<endl;
		  cin>>num;
		  int i,n,j,k,digit,p,f,b;
		  int c;
		  int flag=0;
		  for(i=0;i<50;i++)
		  { c=(b/10);
		    b=c;
		    if(c==0)
		    break;
		   else 
		   flag=flag+1;}
	
		digit=flag-2;
	   j=digit;
	   f=num;
	   k=0;
	   for(i=0;i<=digit;i++)
	   {p=num%10;
	   num=num/10;
	   k=((p*pow(10,j-i-1))+k);
      }
        
if(k==f)
cout<<endl<<"pallindrome";
else cout<<endl<<"not a pallindrome.";
}};

int main()
{ number c;
return 0;
}






