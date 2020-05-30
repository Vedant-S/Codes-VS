#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,1,15,20,25};
	int i,j,m;
	i=++a[1];
	j=a[1]++;
	m=a[i++];
	cout<<i<<j<<m;
}
