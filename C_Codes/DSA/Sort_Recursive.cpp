#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int n;
void swap(int&,int&);
int partitioning(int A[],int lb,int ub);
void Merge(int A[],int lb,int m,int ub);
void MergeSort(int A[],int lb,int ub);
void quickSort(int A[],int lb,int ub);
int main()
{
    int i;
        cout<<"Enter number of elements required: ";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" elements: ";
    for (i=0;i<n;i++)
     cin>>A[i];

//    quickSort(A,0,n-1);
    MergeSort(A,0,n-1);
    cout<<endl<<"_________________________"<<endl<<"FINAL SORTED ARRAY\n ";
    for (i=0;i<n;i++)
     cout<<A[i]<<",";

cout<<endl<<endl;
 return 0;
}

void Merge(int A[],int lb,int m,int ub)
{
 int i=lb,j=m+1,t[ub-lb+1],k=0;
 while(i<=m && j<=ub)
 {
  if(A[i]<A[j])
  {
   t[k]=A[i];
   k++;
   i++;
  }
  else
  {
   t[k]=A[j];
   k++;
   j++;
  }
 }
 while(i<=m)
 {
  t[k]=A[i];
  i++;
  k++;
 }
 while(j<=ub)
 {
  t[k]=A[j];
  k++;
  j++;
 }
 for(i=lb;i<=ub;i++)
    A[i]=t[i-lb];
}

void MergeSort(int A[],int lb,int ub)
{
 int m=0;
 if(lb<ub)
 {
    cout<<endl;
    for (int i=0;i<n;i++)
    cout<<A[i]<<",";
    m=(lb+ub)/2;
  MergeSort(A,lb,m);
  MergeSort(A,m+1,ub);
  Merge(A,lb,m,ub);
 }
}

void swap(int &a,int &b)
{
 int t=a;
     a=b;
     b=t;
}

int partitioning(int A[],int lb,int ub)
{
    int pivot = A[ub]; // pivot
    int i = (lb - 1); // Index of smaller element

    for (int j = lb; j <= ub - 1; j++)
        if (A[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(A[i], A[j]);
        }
    swap(A[i + 1], A[ub]);
    return (i + 1);
}

void quickSort(int A[], int lb, int ub)
{
    if (lb < ub)
    {
    cout<<endl;
    for (int i=0;i<n;i++)
    cout<<A[i]<<",";
        int pi = partitioning(A, lb, ub);
        quickSort(A, lb, pi - 1);
        quickSort(A, pi + 1, ub);
    }
}
*/

void swap(int &a,int &b)
{
 int t=a;
     a=b;
     b=t;
}

int main()
{
int n=10,c=0;
 for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)
   for(int k=j+1;k<n;k++)
   {
    cout<<i<<j<<k<<endl;
    c++;
   }
cout<<"nCr = "<<c;

 cout<<endl;
 return 0;
}
