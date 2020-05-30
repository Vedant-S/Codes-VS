#include<iostream>
using namespace std;

class MERGE
{short int A[50],B[50],C[50];
  unsigned int M,N;
  void process()
  { int i,j;i=0;j=0;int k=0;
  while(i<M && j<N)
  { if(A[i]<=B[j])
    { C[k]=A[i];i++;k++;}
    else
    {C[k]=B[j];k++;j++;}
  }
  while(i<M)
  {C[k]=A[i];i++;k++;}
  while(j<N)
  {C[k]=B[j];j++;k++;}
  int x;
  cout<<"\nThe array A is "<<endl;
  for(x=0;x<M;x++)
  { cout<<A[x]<<"\t";}
  cout<<endl;
  cout<<"\n The array B is"<<endl;
  for(x=0;x<N;x++)
  { cout<<B[x]<<"\t";}
  cout<<endl;
  cout<<"\nThe merged array C is "<<endl;
  for(x=0;x<M+N;x++)
  { cout<<C[x]<<"\t";}
  cout<<endl;
  }
 public:
 MERGE()
 { int y;
   cout<<"\n Give size of array A ";
   cin>>M;
   cout<<"\n Give the elements of integer array A(ascending order) \n"<<endl;
   for(y=0;y<M;y++)
   { cin>>A[y];}
   cout<<"\n Give size of array B ";
   cin>>N;
    cout<<"\n Give the elements of integer array B(ascending order) \n"<<endl;
   for(y=0;y<N;y++)
   { cin>>B[y];}
   cout<<endl;
   process();
 } 
 
  
};
int main()
{ cout<<"hello";
 MERGE M1;
 return 0;
}

