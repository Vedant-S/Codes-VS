#include<stdio.h>
#include<iostream>
using namespace std;
class player1
{int health1, skill1;
 char a[2],charactername1[20];
 public:
 void getdata1(void)
 {cout<<"\t    PLAYER1:ENTER YOUR NAME";
 gets(a);
 gets(charactername1);
 cout<<"\n                   WELCOME ";
 puts(charactername1);
 cout<<"\n";
 health1=100;
}
void hplow1(void)
{health1=health1-5;
}
void hpmid1(void)
{health1=health1-10;
}
void hphigh1(void)
{health1=health1-15;
}
void hprestore1(void)
{health1=health1+10;
}
};
class player2
{int health2, skill2;
 char charname2[20];
 public:
 void getdata2(void)
 {cout<<"\t    PLAYER2:ENTER YOUR NAME";
 gets(charname2);
 cout<<"\n                   WELCOME ";
 puts(charname2);
 cout<<"\n";
 health2=100;
}
void hplow2(void)
{health2=health2-5;
}
void hpmid1(void)
{health2=health2-10;
}
void hphigh1(void)
{health2=health2-15;
}
void hprestore2(void)
{health2=health2+10;
}
};
int main()
{int m;
 cout<<"********************************************************************************";
 cout<<"\n\n\n";
 cout<<"\t\t"<<"WELCOME TO MY GAME.ENTER ANY NUMBER TO PROCEED";
  cin>>m;
 cout<<"\n\n\n";
  player1 p1;
  player2 p2;
  p1.getdata1();
  p2.getdata2();
  cout<<"\n\n                         ENTER A NUMBER TO BEGIN";
  cin>>m;
  system("cls");
  return 0;
}
