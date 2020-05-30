#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Large(int*,int,int);
int Little(int*,int,int);
int main()
{
 int s,n,big,small=-1;
 cout<<"Enter number of elements required: ";
 cin>>s;
 int A[s];
 cout<<"Enter "<<s<<" elements:\n";
 for(int i=0;i<s;i++)
  cin>>A[i];
 cout<<"For finding the 'n'th smallest and largest elements, n = ";
 cin>>n;
 big=Large(A,s-1,n);
 small=Little(A,s-1,n);
 cout<<endl<<n<<"th smallest elements is "<<small<<"\n"<<n<<"th largest element is "<<big;

 cout<<endl;
 return 0;
}

int Large(int A[],int siz,int k)
{
 static int big=INT_MAX,c=1;
 int temp=INT_MIN;
 if(c<=k)
 {
  ++c;
  for(int i=0;i<=siz;i++)
   if(A[i]<big)
    if(A[i]>=temp)
     for(int j=0;j<=siz;j++)
      temp=A[i];
  big=temp;
  return Large(A,siz,k);
 }
 return big;
}

int Little(int A[],int siz,int k)
{
 static int small=INT_MIN,c=1;
 int temp=INT_MAX;
 if(c<=k)
 {
  ++c;
  for(int i=0;i<=siz;i++)
   if(A[i]>small && A[i]<=temp)
     //for(int j=0;j<=siz;j++)
      temp=A[i];
  small=temp;
  return Little(A,siz,k);
 }
 return small;
}
