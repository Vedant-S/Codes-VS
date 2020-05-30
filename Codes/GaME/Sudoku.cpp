#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<unistd.h>
#include<dos.h>
#include<math.h>
#include<time.h>
using namespace std;

void Display(int A[9][9]);
int main()
{
 int A[9][9]; for(int i=0;i<9;i++)for(int j=0;j<9;j++)A[i][j]=rand()%10;
cout<<"hello\nhell\nhel";
 Display(A);
}

void Display(int A[9][9])
{
 cout<<"\n      ";
 for(int i=0;i<75;i++)
    cout<<"=";
 cout<<endl;
 cout<<"      ";
 for(int i=0;i<9;i++)
 {
  if((i+1)%3)
  {
  for(int j=0;j<9;j++)
   if(j%3)cout<<"\b!       |"; else cout<<"\b||       |";
  cout<<"|"<<endl;
  cout<<"      ";
  for(int j=0;j<9;j++)
   if(A[i][j]!=0){if(j%3)cout<<"\b!   "<<A[i][j]<<"   |"; else cout<<"\b||   "<<A[i][j]<<"   |";}
   else{if(j%3)cout<<"\b!   -   |"; else cout<<"\b||   -   |";}
  cout<<"|"<<endl;
  cout<<"      ";
  for(int j=0;j<9;j++)
   if(j%3)cout<<"\b!.......|"; else cout<<"\b||.......|";
  cout<<"|"<<endl;
  cout<<"      ";
  }
  else
  {
  for(int j=0;j<9;j++)
   if(j%3)cout<<"\b!       |"; else cout<<"\b||       |";
  cout<<"|"<<endl;
  cout<<"      ";
  for(int j=0;j<9;j++)
   if(A[i][j]!=0){if(j%3)cout<<"\b!   "<<A[i][j]<<"   |"; else cout<<"\b||   "<<A[i][j]<<"   |";}
   else{if(j%3)cout<<"\b!   -   |"; else cout<<"\b||   -   |";}
  cout<<"|"<<endl;
  cout<<"      ";
  for(int j=0;j<9;j++)
   if(j%3)cout<<"\b!_______|"; else cout<<"\b||_______|";
  cout<<"|"<<endl;
  cout<<"     |";
  for(int j=0;j<75;j++)
    cout<<"-";
  cout<<"|"<<endl;
  cout<<"      ";
  }
 }
system("PAUSE");
system("CLS");
}
