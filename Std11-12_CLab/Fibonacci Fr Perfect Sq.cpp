#include<iostream>
#include<math.h>
using namespace std;
class FIBO
{ unsigned short int N;
  public:
  	FIBO()
  	{cout<<"ENTER VALUE OF N";
  	 cin>>N;
  	 int s1=(5*N*N)+4;
  	 int s2=(5*N*N)-4;
  	 int t1=sqrt(s1);
  	 int t2=sqrt(s2);
  	 float t3=sqrt(s1);
  	 float t4=sqrt(s2);
  	 float t5=t1;
  	 float t6=t2;
  	 if(t3==t5||t4==t6)
  	 {cout<<"THE NUMBER "<<N<<"IS A FIBONACCI NUMBER";
  	  cout<<endl;
  	 }
  	 else
  	 {cout<<"NUMBER IS NOT A FIBONACCI NUMBER"<<endl;
  	 }
  	}
};
int main()
{FIBO a;
 return 0;
}

