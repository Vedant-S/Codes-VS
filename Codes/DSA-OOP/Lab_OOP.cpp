#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
void permute(int*,int,int);
void swap(int&,int&);
void eval(int*,int,int);
void power_set(int A[],int lb,int ub);
void append(int A[],int);
void trunc(int A[]);
char S[10]="-+x";
int n,x;
int *P=new int;
int main()
{
 cout<<"Enter number of elements required: ";
 cin>>n;
 cout<<"Enter "<<n<<" numbers: ";
 for(int i=0;i<n;i++)
  cin>>P[i];
 cout<<"Enter Required Number:";
 cin>>x;
 int A[n];
 power_set(A,0,n-1);

 delete P;
 cout<<endl;
 return 0;
}

static int k=0,m=0;
void append(int A[],int ch)
{
 A[k++]=ch;
 //P[k]='\0';
}

void trunc(int A[])
{
 k--;
 //P[k]='\0';
}

static int ti=0,tlb=0;
static int c=0,f=0;
static int v=0;
void eval(int A[],int lb,int ub)
{
 int t,k_;
if(lb<=ub)
 {
      t=v;
 for(int j=1;j<=3;j++)
  {
      v=t;
    if(j==1){v-=A[lb];}
    if(j==2){v+=A[lb];}
    if(j==3){v*=A[lb];}
    eval(A,lb+1,ub);
  }
 }
  else
  {
    c++;
//   if(x==v)
//    {
    cout<<endl<<" ("<<f<<"."<<c<<")\t\t"<<A[0];
    k_=c-1;
   for(int j=k-2;j>=0;j--)
     {
     int p=pow(3,j);
     t=k_/p;
     cout<<S[t]<<A[k-1-j];
     k_%=p;
     }
    std::cout<<std::showpos<<" = "<<v;
    std::cout<<std::noshowpos;
//    }
  }
}

void swap(int &a,int &b)
 {
    int t;
    t=a;
    a=b;
    b=t;
 }

void permute(int A[],int lb,int ub)
{
if(lb<=ub)
  {
   for(int i=lb;i<=ub;i++)
   {
       int flag=1;
      for(int j=lb;j<i;j++)
       if(A[j]==A[i])
        flag=0;

     if(flag!=0)
     {
      swap(A[lb],A[i]);
      permute(A,lb+1,ub);
      swap(A[lb],A[i]);
     }
   }
  }
  else
  {
   c=0;f++;v=A[0];
   eval(A,1,k-1);
  }
}

void power_set(int A[],int lb,int ub)
{
 if(lb<=ub) // OR A[l-1]!=P[strlen(P)-1]
 {
  for(int i=lb;i<=ub;i++)
   {
    if((tlb<lb && ti<i) || (tlb>=lb && ti>=i))
    {
     append(A,P[i]);
     ti=i;
     tlb=lb;
     power_set(A,lb+1,ub);
     //cout<<endl<<" ("<<m<<")";
     cout<<endl;
     for(int i=0;i<k;i++)
    cout<<A[i]<<",";
cout<<endl;
c=0;v=A[0];
     permute(A,0,k-1);

     trunc(A);
    }
   }
 }
}
/*
class A
{
public:
 static int num;
 static void setnum()
 {
  cout<<"Enter a number:";cin>>num;
 }
};
int A::num;

class B:public A
{ int sum;
 public:
 B()
 {
     cout<<num;
   int sum=0;
 for(int i=1;i<num;i++)
  if(num%i==0)
   sum+=i;
 if(sum==num)
    cout<<"Number is Perfect!\n";
 }
};

class C:public A
{int n,t=0,c=0,sum=0;
 public:
 C()
 {
   n=num; t=n;
   for(;n>0;c++)
    n/=10;
   n=t;
   for(;n>0;n/=10)
    sum=sum+pow((n%10),c);
   if(t==sum)
    cout<<"Number is Armstrong!\n";
 }
};

int main()
{
 A::setnum();
 B ob1;C ob2;

 cout<<endl;
 return 0;
}
*/
class Smp
{
 int a;
 static int c;
 public:
 Smp(){cout<<"Enter:";cin>>a;}
 Smp(Smp &s)
 {
     cout<<endl<<"Copy constructor-"<<c+1<<endl;
     a=s.a;c++;
 }
};
int Smp::c;

Smp &func(Smp u)
{
 Smp v(u);
 Smp w=v;
 return w;
}

int main()
{

return 0;
}
