/*
Program Title : Students Information System
*/

#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<ctype.h>

int menu(int,int,int,char a[25],char b[25],char c[25],char d[25],char e[25],char sl1[2],char sl2[2],char title[40],char under[2]);
void lbyl(char a[50]);
void graph();
void words(char a[25],char b[30]);
void graph();
void main_menu();
void student_menu();
void updown();
void man();
void mark_menu();
int records=0;

void words(char a[25],char b[30])
 {
 setcolor(YELLOW);
 settextstyle(7,0,6);
 outtextxy(100,100,a);
 for(int ff=10;ff<255;ff++)
  {
  settextstyle(10,0,5);
  setcolor(LIGHTGREEN );
  outtextxy(ff*24,85,"?????.");
  setcolor(BLACK);
  delay(1);
  outtextxy(ff*24 ,85,"?????.");
  }
 setcolor(YELLOW);
 settextstyle(7,0,6);
 outtextxy(100,100,a);
 settextstyle(7,0,6);
 delay(500);
 setcolor(LIGHTGREEN);
 outtextxy(100,100,a);
 setcolor(YELLOW);
 settextstyle(7,0,6);
 outtextxy(70,180,b);
 for(ff=10;ff<255;ff++)
  {
  settextstyle(10,0,5);
  setcolor(LIGHTGREEN );
  outtextxy(ff*24,170,"?????.");
  setcolor(BLACK);
  delay(1);
  outtextxy(ff*24 ,170,"?????.");
  }
 setcolor(YELLOW);
 settextstyle(7,0,6);
 outtextxy(70,180,b);
 settextstyle(7,0,6);
 delay(500);
 setcolor(LIGHTGREEN);
 outtextxy(70,180,b);
 setcolor(RED);
 for(int li=70;li<600;li++)
  {
  delay(4);
  outtextxy(li,194,".");
  }
 while(!kbhit())
  {
  settextstyle(11,0,2);
  for(int bv=10;bv<255;bv++)
   {
   setcolor(LIGHTGREEN);
   outtextxy(bv*4,300,"????");
   setcolor(BLACK);
   delay(2);
   outtextxy(bv*4 ,300,"????");
   }
  settextstyle(11,0,2);
  setcolor(GREEN);
  outtextxy(400+50,300,"Press Any Key");
  delay(300);
  setcolor(LIGHTGREEN);
  outtextxy(400+50,300,"Press Any Key");
  setcolor(RED);
  outtextxy(510+50,300,">");
  delay(80);
  outtextxy(515+50,300,">");
  delay(80);
  outtextxy(520+50,300,">");
  setcolor(GREEN);
  outtextxy(510+50,300,">");
  delay(80);
  outtextxy(515+50,300,">");
  delay(80);
  outtextxy(520+50,300,">");
  }
 }

void lbyl(char a[50])
{
int l,i;
l=strlen(a);
for (i=0;i<l;i++)
{
delay(350);
cout<<a[i];
}
}

void fx()
 {
 clrscr();
 graph();
 int i,y;
for(int x=640;x>=0;x--) 		  //Design
 {
 y=x>>1;
 setcolor(14);
 rectangle(x,y,619-x,469-y);
 setcolor(0);
 rectangle(x+1,y+1,619-x-1,469-y-1);
 delay(5);
 if(x==639)
  {
  gotoxy(31,13);
  lbyl("Navi Arora");
  gotoxy(38,15);
  lbyl("Presents");
  gotoxy(29,17);
  lbyl("Students Information System");
  delay(900);
  }
 }

for ( i=0 ; i<2000; ++i )				//Put Stars
 {
 putpixel(random(620), random(460), random( 16-1 )+1);
 delay(1);
 }
 delay(1000);
words("    Navi ","Arora");
getch();
clrscr();
graph();
x=7;
y=16;
 for(i=0;i<2000;i++)
  putpixel(random(640),random(480),random(15)+1);

 settextstyle(7,0,7);
 setcolor(16);
 delay(1200);
 for(i=-10;i<=150;i+=2)
  {
  setcolor(x);
  outtextxy(i,100,"WEL");
  setcolor(y);
  if(i<150)
   outtextxy(i,100,"WEL");
  }
 for(i=600;i>=330;i-=2)
  {
  setcolor(x);
  outtextxy(i,100,"OME");
  setcolor(y);
  if(i>330)
   outtextxy(i,100,"OME");
  }
 for(i=-20;i<=100;i+=4)
  {
  setcolor(x);
  outtextxy(290,i,"C");
  setcolor(y);
  if(i<100)
   outtextxy(290,i,"C");
  }

 delay(1500);
 setcolor(16);
 for(i=-10;i<=370;i=i+2)
  {
  setcolor(x);
  outtextxy(i,200,"T");
  setcolor(y);
  if(i<370)
   outtextxy(i,200,"T");
  }
 for(i=600;i>400;i=i-2)
  {
  setcolor(x);
  outtextxy(i,200,"O");
  setcolor(y);
  if(i>400)
   outtextxy(i,200,"O");
  }
  setcolor(x);
  outtextxy(400,200,"O");

 delay(2500);
 clearviewport();

 settextstyle(7,0,7);
 setbkcolor(RED);
 for(i=-10;i<316;i++)
  {
  setcolor(1);
  outtextxy(i,100,"STUDENT");
  setcolor(16);
  if(i<316)
   outtextxy(i,100,"STUDENT");
  }
 for(i=460;i>220;i--)
  {
  setcolor(2);
  outtextxy(100,i,"INFORMATION");
  setcolor(16);
  if(i>220)
   outtextxy(100,i,"INFORMATION");
  }
 for(i=600;i>150;i--)
  {
  setcolor(5);
  outtextxy(i,350,"SYSTEM");
  setcolor(16);
  if(i>150)
  outtextxy(i,350,"SYSTEM");
  }
  closegraph();
 }


void message(int x,int y,int lines,char a[50],char b[50],char c[50],
			 char d[50],char e[50],char f[10],int back)
{
int l,i,j;
char f1[10];

l=strlen(a);
if(l<strlen(b))
 l=strlen(b);
if(l<strlen(c))
 l=strlen(c);
if(l<strlen(d))
 l=strlen(d);
if(l<strlen(e))
 l=strlen(e);
if(l<strlen(f))
 l=strlen(f);
l+=4;

textbackground(back);
for(i=1;i<l+2;i++)
for(j=1;j<lines+4;j++)
 {
 gotoxy(i+x,j+y);
 cputs(" ");
 }

gotoxy(x,y);
cputs("?");
for(i=x+1;i<l+x+1;i++)
 {
 gotoxy(i,y);
 cputs("?");
 gotoxy(i,y+lines+3);
 cputs("?");
 }
gotoxy(x+1+l,y);
cputs("?");

for(i=y+1;i<lines+4+y;i++)
 {
 gotoxy(x,i);
 cputs("?");
 gotoxy(x+l+1,i);
 cputs("?");
 }
gotoxy(x,y+lines+3);
cputs("?");
gotoxy(x+l+1,y+lines+3);
cputs("?");

j=l-strlen(a);
j=j/2;
gotoxy(j+x+1,++y);
cputs(a);
j=l-strlen(b);
j=j/2;
gotoxy(x+j+1,y+1);
cputs(b);
j=l-strlen(c);
j=j/2;
gotoxy(x+j+1,2+y);
cputs(c);
j=l-strlen(d);
j=j/2;
gotoxy(x+j+1,3+y);
cputs(d);
j=l-strlen(e);
j=j/2;
gotoxy(x+j+1,4+y);
cputs(e);
j=l-strlen(f)-3;
j=j/2;
gotoxy(x+j+1,y+lines+1);
strcat(f1," ");
strcat(f1,f);
strcat(f1," ");
textbackground(BLACK);
cputs(f1);
textcolor(BLACK);
for(i=0;i<lines+3;i++)
 {
 gotoxy(x+l+2,i+y);
 cputs("?");
 }
for(i=1;i<l+3;i++)
 {
 gotoxy(x+i,y+lines+3);
 cputs("?");
 }
}

struct s_date
{
int dd,mm,yyyy;
};

//DEFINING OF Stuctures
struct student
{
char address[30];
char fname[30];
int redgno;
s_date dob;
char clas[5];
char name[20];
int sub1,sub2,sub3,sub4,sub5,total;
float avg,pre;
char div[10];
char st_code[10];
}s[10];

/****************************Function To Add Data***************************/
void add()
 {
 textbackground(16);
 textcolor(7);
 int i=0;
 char ch='y';
 char fn[20];
 fstream file;
 do
  {
  records++;
  ss:
  clrscr();
  int st;
  int t_redg,mark;
  gotoxy(20,2);
  cout<<"Students Data Collector";
  gotoxy(20,3);
  cout<<"=======================";
  gotoxy(19,7);
  cout<<"Enter The Following";
  gotoxy(19,8);
  cout<<"Registaration No:";gotoxy(36,8);cin>>t_redg;
  s[i].redgno=t_redg;
  gotoxy(20,10);
  cout<<"Name          :";gotoxy(35,10);gets(s[i].name);
  gotoxy(20,12);
  cout<<"Address       :";gotoxy(35,12);gets(s[i].address);
  gotoxy(20,14);
  cout<<"Father's Name :";gotoxy(35,14);gets(s[i].fname);
  gotoxy(20,16);
  cout<<"Class         :";gotoxy(35,16);gets(s[i].clas);
  gotoxy(20,18);
  cout<<"Date Of Birth :DD MM YYYY";gotoxy(35,18);
  cin>>s[i].dob.dd>>s[i].dob.mm>>s[i].dob.yyyy;

  sa:
  clrscr();
  gotoxy(20,2);
  cout<<"Student Data Entry Form";
  gotoxy(20,3);
  cout<<"=======================";
  gotoxy(10,7);
  cout<<"Enter The Stream Code:\n1.Science Stream\n2.Commerce Streame";
  gotoxy(32,7);
  cin>>st;
  switch(st)
   {
   case 1:strcpy(s[i].st_code,"Science");
   break;
   case 2:strcpy(s[i].st_code,"Commerce");
   break;
   default:cout<<"\n\t\t\tInvalid Type.\n\nDo you want to continue?(Y/N)...";
	   cin>>ch;
	   if (ch=='y'||ch=='Y')
	   {
	   clrscr();
	   goto sa;
	   }
	   else add();
   }

  clrscr();
  gotoxy(20,2);
  cout<<"Student Data Entry Form";
  gotoxy(20,3);
  cout<<"=======================";
  gotoxy(10,5);
  cout<<"Enter The Following Marks";
  gotoxy(10,10);
  cout<<"Sub1(Eng/Eng):";                                           //Sub 1
  gotoxy(30,10);
  cin>>s[i].sub1;
  gotoxy(10,12);
  cout<<"Sub2(Math/A/C):";                                          //Sub 2
  gotoxy(30,12);
  cin>>s[i].sub2;
  gotoxy(10,14);
  cout<<"Sub3(Phy/Eco):";					    //Sub 3
  gotoxy(30,14);
  cin>>s[i].sub3;
  gotoxy(10,16);
  cout<<"Sub4(Chem/B.st):";					     //Sub 4
  gotoxy(30,16);
  cin>>s[i].sub4;
  gotoxy(10,18);						     //Sub 5
  cout<<"Sub5(Bio/Comp):";
  gotoxy(30,18);
  cin>>s[i].sub5;
  s[i].total=s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5;
  if((s[i].sub1<33)||(s[i].sub2<33)||(s[i].sub3<33)||(s[i].sub4<33)||(s[i].sub5<33))
  strcpy(s[i].div,"Fail");
  else if(s[i].total>=375)
  strcpy(s[i].div,"Distintion");
  else if((s[i].total>=300)&&(s[i].total<375))
  strcpy(s[i].div,"First Class");
  else if((s[i].total>=250)&&(s[i].total<300))
  strcpy(s[i].div,"Second Class");
  else if(s[i].total<165)
  strcpy(s[i].div,"Fail");

  strcat(fn,s[i].name);
  strcat(fn,".txt");
  file.open(fn,ios::out);
   if(!file)
    {
    gotoxy(25,79);
    cout<<".";
    }
  file<<"                            Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
  file.close();

  i++;
  gotoxy(10,22);
  cout<<"Want More Record To Be Written?(Y/N)......";
  cin>>ch;
  }while(ch=='y'||ch=='Y');
  if(ch=='n'||ch=='N') student_menu();
 }

/******************************Function To Modify Marks**********************/
void mod()
 {
 int regno,flag=0,i;
 char ch;
 student te;
 clrscr();
 cout<<"\n\nEnter The Reg No to be modified:";
 cin>>regno;
 for(i=0;i<10;i++)
  {
  if(s[i].redgno==regno)
   {
   flag=1;
   cout<<"\nSubject 1    :"<<s[i].sub1;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub1;
    s[i].sub1=te.sub1;
    }
   cout<<"\nSubject  2  :"<<s[i].sub2;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub2;
    s[i].sub2=te.sub2;
    }
   cout<<"\nSubject 3   :"<<s[i].sub3;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub3;
    s[i].sub3=te.sub3;
    }
   cout<<"\nSubject 4   :"<<s[i].sub4;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub4;
    s[i].sub4=te.sub4;
    }
   cout<<"\nSubject 5   :"<<s[i].sub5;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub5;
    s[i].sub5=te.sub5;
    }
   }
  }
  if(flag==0) cout<<"Invalid Reg No!";
 }

/****************************Function To View Help***************************/
void help()
{
//clrscr();
textcolor(WHITE);
message(12,8,6,"This Software is designed for aiding schools in",
	       "keeping records of students and thier information.",
	       "This software is a interactive menu driven program.",
	       "This program will create a file with students name ",
	       "with all his infomation","OK",LIGHTGRAY);
gotoxy(15,14);
textcolor(WHITE);
textbackground(LIGHTGRAY);
cputs("    Keys:-Up,-Down,Enter-Selecting,Esc-To Exit.");
getch();
textcolor(BLACK);
main_menu();
}

/************************Function To Show Credits****************************/
void updown()
{
int i;
textcolor(GREEN);
for (i=25;i>10;i--)
{
delay(180);
clrscr();
gotoxy(30,i);
cputs("PROGRAMERS");
gotoxy(30,i+2);
cputs("Navi Arora");

gotoxy(30,5+i);
cputs("               ");
}
delay(800);
clrscr();
for (i=25;i>10;i--)
{
delay(180);
clrscr();
gotoxy(30,i);
cputs("Special Effects By");
gotoxy(30,2+i);
cputs("Navi Arora");
gotoxy(30,4+i);
cputs("              ");
}
delay(800);
clrscr();
for (i=25;i>10;i--)
{
delay(180);
clrscr();
gotoxy(30,i);
cputs("Special Thanks To");
gotoxy(30,2+i);
cputs("www.NaviArora.com");
gotoxy(30,3+i);
cputs("");
gotoxy(30,4+i);
cputs("              ");
}
delay(800);
clrscr();
for (i=25;i>10;i--)
{
delay(180);
clrscr();
gotoxy(30,i);
cputs("Developed At");
gotoxy(30,2+i);
cputs("www.cbse-sample-papers.blogspot.com");
gotoxy(30,4+i);
cputs("              ");
}
delay(800);
clrscr();
for (i=25;i>10;i--)
{
delay(180);
clrscr();
textcolor(RED+BLINK);
gotoxy(10,i);
cputs("                      WARNING!!");
textcolor(BLUE);
gotoxy(10,1+i);
cputs("        This program is protected by copyright laws");
gotoxy(10,2+i);
cputs("                and International Treaties");
gotoxy(10,4+i);
cputs("Illigal Copying or reproduction of this software is punishable ");
gotoxy(10,5+i);
cputs("               and is against the protocol    ");
}
delay(3000);
}

/***********************Function To Initialize Graphics**********************/
void graph()
 {
 int graphdriver = DETECT, graphmode;
 initgraph(&graphdriver, &graphmode, "");
 }

/****************************Function To Make Menus**************************/
int menu(int xi,int y,int num,char a[25],char b[25],char c[25],char d[25],char e[25],char sl1[2],char sl2[2],char title[40],char under[2])
{
char ch;
int key,x=4,sl=1,l,i;
clrscr();
l=strlen(title);
gotoxy(xi,y-2);
cout<<title;
cout<<"\n";
gotoxy(xi,y-1);
for(i=0;i<l;i++)
cout<<under;
    gotoxy(xi,y);
    cout<<sl1<<a<<sl2;
    gotoxy(xi,y+1);
    cout<<" "<<b;
    gotoxy(xi,y+2);
    cout<<" "<<c;
    gotoxy(xi,y+3);
    cout<<" "<<d;
    gotoxy(xi,y+4);
    cout<<" "<<e;
    gotoxy(xi,y+num+1);
cout<<"Enter Your Choice:1";
 key=bioskey(0);
while (key!=7181)
 {
 switch(key)
  {
  case 18432:	clrscr();                               //UP
  l=strlen(title);
  gotoxy(xi,y-2);
  cout<<title;
  cout<<"\n";
  gotoxy(xi,y-1);
  for(i=0;i<l;i++)
  cout<<under;
		switch(x)
		{
		case 4: if (num==4) goto up4;
		else if (num==3) goto up3;
		else if (num==2) goto up2;
		gotoxy(xi,y);
		cout<<" "<<a;
		gotoxy(xi,y+1);
		cout<<" "<<b;
		gotoxy(xi,y+2);
		cout<<" "<<c;
		gotoxy(xi,y+3);
		cout<<" "<<d;
		gotoxy(xi,y+4);
		cout<<sl1<<e<<sl2;
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:5";sl=5;
		if (num==5) x=2;
		else x=1;
		break;
		case 2: up4:
		gotoxy(xi,y);
		cout<<" "<<a;
		gotoxy(xi,y+1);
		cout<<" "<<b;
		gotoxy(xi,y+2);
		cout<<" "<<c;
		gotoxy(xi,y+3);
		cout<<sl1<<d<<sl2;
		gotoxy(xi,y+4);
		cout<<" "<<e;
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:4";sl=4;
		if (num==5) x=3;
		else if (num==4) x=3;
		else x=1;
		break;
		case 3: up3:
		gotoxy(xi,y);
		cout<<" "<<a;
		gotoxy(xi,y+1);
		cout<<" "<<b;
		gotoxy(xi,y+2);
		cout<<sl1<<c<<sl2;
		gotoxy(xi,y+3);
		cout<<" "<<d;
		gotoxy(xi,y+4);
		cout<<" "<<e<<" ";
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:3";sl=3;
		x=1;
		break;
		case 1: up2:
		gotoxy(xi,y);
		cout<<" "<<a;
		gotoxy(xi,y+1);
		cout<<sl1<<b<<sl2;
		gotoxy(xi,y+2);
		cout<<" "<<c;
		gotoxy(xi,y+3);
		cout<<" "<<d;
		gotoxy(xi,y+4);
		cout<<" "<<e;
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:2";sl=2;
		if (num==5) x=5;
		else if (num==2) x=5;
		else x=5;
		break;
		case 5:	gotoxy(xi,y);
		cout<<sl1<<a<<sl2;
		gotoxy(xi,y+1);
		cout<<" "<<b;
		gotoxy(xi,y+2);
		cout<<" "<<c;
		gotoxy(xi,y+3);
		cout<<" "<<d;
		gotoxy(xi,y+4);
		cout<<" "<<e;
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:1";sl=1;
		if (num==5) x=4;
		else if (num==2) x=1;
		else if (num==3) x=3;
		else if (num==4) x=2;
		break;
		default:cout<<"Wrong!!2"<<x;getch();exit(0);
		}
break;
  case 20480:	clrscr();				//DOWN
  l=strlen(title);
  gotoxy(xi,y-2);
  cout<<title;
  cout<<"\n";
  gotoxy(xi,y-1);
  for(i=0;i<l;i++)
  cout<<under;
		switch(x)
		{
		case 1:	gotoxy(xi,y);
		cout<<" "<<a<<"\n"
		<<" "<<b<<"\n"
		<<" "<<c<<" \n"
		<<" "<<d<<" \n"
		<<sl1<<e<<sl2;
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:5";sl=5;
		x=5;
		break;
		case 2:	gotoxy(xi,y);
		cout<<" "<<a<<"\n"
		<<" "<<b<<"\n"
		<<" "<<c<<" \n"
		<<sl1<<d<<sl2
		<<"\n "<<e<<" \n";
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:4";sl=4;
		if (num==4) x=5;
		else x=1;
		break;
		case 3:	gotoxy(xi,y);
		cout<<" "<<a<<"\n"
		<<" "<<b<<"\n"
		<<sl1<<c<<sl2
		<<"\n "<<d<<" \n"
		<<" "<<e<<" ";
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:3";sl=3;
		if (num==5) x=2;
		else if (num==3) x=5;
		else x=2;
		break;
		case 4:	gotoxy(xi,y);
		cout<<" "<<a<<"\n"
		<<sl1<<b<<sl2
		<<"\n "<<c<<" \n"
		<<" "<<d<<" \n"
		<<" "<<e<<" \n";
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:2";sl=2;
		if (num==5) x=3;
		else if (num==2) x=5;
		else x=3;
		break;
		case 5:	gotoxy(xi,y);
		cout<<sl1<<a<<sl2
		<<"\n "<<b<<"\n"
		<<" "<<c<<" \n"
		<<" "<<d<<" \n"
		<<" "<<e<<" \n";
		gotoxy(xi,y+num+1);
		cout<<"Enter Your Choice:1";sl=1;
		if (num==5) x=4;
		else if (num==2) x=4;
		else x=4;
		break;
		default:cout<<"Wrong!!2"<<x;getch();exit(0);
		}
break;
case 283:sl=6; goto end;
case 561:sl=1;goto end;
case 818:sl=2;goto end;
case 1075:sl=3;goto end;
case 1332:sl=4;goto end;
case 1589:sl=5;goto end;
case 1846:sl=6;goto end;
case 7181:goto end;
default:break;
 }
  key=bioskey(0);
 }
end:
return sl;
}

/***********************************Final Screen*****************************/
void man()
{
int d=DETECT,m,i;
initgraph(&d,&m," ");
settextstyle(7,0,7);
randomize();
for(i=0;i<5800;i++)
putpixel(random(800),random(600),random(15)+1);
outtextxy(10,150,"  See you again!");
getch();
closegraph();
}

/*********************************Menus*************************************/
/********************************Menu To View Marks**************************/
void view()
 {
 int opt,i,reg,flag=0;
 char n[20],ch;
 view:
 opt=menu(1,5,5,"1.View All","2.Search Reg No","3.Show Failers","4.Read From File"
	       ,"5.Back","[","]", "Dispay Menu","=");
 switch(opt)
  {
  case 1:				//Show All Marks
  for(i=0;i<10;i++)
   {
   clrscr();
   if(s[i].redgno!=NULL)
    {
    cout<<"                            Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
    cout<<"\n\nPress Any Key To Continue..";
    getch();
    }
   else break;
   }
  break;
  case 3:clrscr();			      //Show Failers
  for(i=0;i<records;i++)
   {
   if((s[i].sub1<33)||(s[i].sub2<33)||(s[i].sub3<33)||(s[i].sub4<33)||(s[i].sub5<33))
    {
    cout<<"			    Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
      cout<<"\n\nPress Any Key To Continue...";
    flag=1;
    getch();
    }
   }
  if(flag==0)
   {
   cout<<"No Failers Found";
   getch();
   view();
   }
  break;
  case 2:clrscr();                           //Search By Reg No
  cout<<"\n\n\tEnter Number To Be Searched:";cin>>reg;
  for(i=0;i<10;i++)
   {
   if(s[i].redgno==reg)
    {
    cout<<"			    Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
    flag=1;
    getch();
    }
   }
  if(flag==0)
   {
   cout<<"Record Not Found";
   getch();
   view();
   }
  break;
  case 4:                                    //Read File
  clrscr();
  cout<<"\n\n\tEnter Name Of Student:";gets(n);
  ifstream fil;
  strcat(n,".txt");
  fil.open(n);
  while(!fil.eof())
  {
  fil.get(ch);
  cout<<ch;
  }
  cout<<"\n\nPress Any Key To Continue...";
  getch();
  break;
  case 5:student_menu();                      //Exit
  default:student_menu();
  }
 goto view;
 }

/******************************Student Menu*********************************/
void student_menu()
 {
 textbackground(16);
 textcolor(15);
 unsigned int tredg;
 char ch='y',ch1;
 do
  {
  clrscr();
  ch1=menu(1,5,3,"1.Add Students","2.Display Student","3.Back","","","[","] "
		,"Student Menu","=");
  switch(ch1)
   {
   case 1:clrscr();                             //Marks
	  add();
	  break;
   case 2:clrscr();                             //View Marks
	  view();
	  break;
   case 3:main_menu();                          //Main Menu
	  getch();
	  break;
   case 6:main_menu();                  	//Main Menu
	  getch();
	  break;

   default:cout<<"\n\nWorng Choice!!";
   }
  cout<<"\n\nDo You Want to Continue?(Y/N)";
  cin>>ch;
  }
 while(ch=='y'||ch=='Y');
 main_menu();
 }

/*********************************Main Menu**********************************/
void main_menu()
{
textbackground(16);
textcolor(LIGHTGRAY);
char ch1;
do{
clrscr();
ch1=menu(1,5,4,"1. Students Details","2. Modify Students","3. Help","4. Exit"
		,""," [","]","Student Information System","=");
switch(ch1)
{
case 1:clrscr();                       //Student Menu
       student_menu();
       break;
case 2:clrscr();                       //Marks Menu
       mark_menu();
       break;
case 3:help();
       break;
case 4:clrscr();			//Exit
       updown();
       man();
       exit(0);
       break;
case 6:clrscr();                        //Exit
//       updown();
//       man();
//       exit(0);
       break;
default:cout<<"\n\nWorng Choice!!";
}
}while(ch1==4);
}

/**********************************Marks Menu********************************/
void mark_menu()
{
textbackground(BLACK);
textcolor(WHITE);
int t_redg,i,opt,flag=0;
char ch='y',na[20];
do
{
clrscr();
gotoxy(1,25);
cout<<"Press Esc to Quit";
opt=menu(1,5,3,"1.Modify Student","2.Remove Student","3.Back",
	       "",""," [","] "," Menu","=");
switch(opt)
{
case 1:	clrscr();				//Modify Student
	mod();
	getch();
	mark_menu();
	break;
case 2:	clrscr();				//Delete Student
	cout<<"Which Student Do you want to Delete\nEnter Reg No:";
	cin>>t_redg;
	for(i=0;i<10;i++)
	 {
	 if(s[i].redgno==t_redg)
	  {
	  strcat(na,s[i].name);
	  strcat(na,".txt");
	  remove(na);
	  cout<<"The Record of "<<s[i].name<<" is removed.";
	  flag=1;
	  break;
	  }
	 }
	if(flag==0)
	 cout<<"Record not found";
	mark_menu();
	break;
default:main_menu();
}
gotoxy(30,25);
cout<<"Do you want to Continue?(Y/N)...";
cin>>ch;
}while(ch=='y'||ch=='Y');
if(ch=='n'||ch=='N')
main_menu();
}

/******************************Main Function*********************************/
void main()
{
clrscr();
fx();
clrscr();
main_menu();
getch();
}

/************************************End*************************************/
