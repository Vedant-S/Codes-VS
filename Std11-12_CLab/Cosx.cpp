#include<iostream>
#include<math.h>
using namespace std;
class SERIES
{      
private:
unsigned short int N;
float D;
public:
SERIES()
{
	cout<<"Enter the angle in degrees whose cosine has to be calculated\n";
	cin>>D;
	cout<<"Enter the number of terms for summation of series\n";
	cin>>N;
	int s=-1, fact;
	float x, ans=0;
	x=D*(3.14/180);
	for(int i=0; i<N; i++)
	{
	fact=1;
	for(int k=1; k<=i; k++)
    {
		fact=k*fact;
    }
	ans=ans+(((pow(s, i)*pow(x, 2*i)))/fact);
	} 
    cout<<"The cosine of the angle "<<D<<" degrees is "<<ans;
  }
};

int main()
{
	SERIES s;
	return 0;
}

