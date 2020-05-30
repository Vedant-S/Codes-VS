#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

bool gameover;
const int width=20;
const int height = 20;
int x,y,fruitX,fruitY,score,wallX,wallY;
int tailX[100],tailY[100];
int ntail;
enum eDirection
{
    STOP=0,LEFT,RIGHT,UP,DOWN

};
eDirection dir;
class A
{
    public:
void setup()
{
    gameover=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fruitX=rand()%width;
    fruitY=rand()%height;
    wallX=rand()%width;
    wallY=rand()%height;
    score=0;
}
};
class B
{
    public:
  void draw()
{
    system("CLS");
    for(int i=0;i<width+2;i++)
        cout<<"#";
        cout<<endl;

       for(int i=0;i<height;i++)
       {
           for(int j=0;j<width;j++)
           {
               if(j==0)
                cout<<"#";
                if(i==y && j==x)
                    cout<<"0";
                    else if(i==fruitY && j==fruitX)
                        cout<<"@";
                else
                {
                     bool print =false;
                    for(int k=0;k < ntail ;k++)
                    {

                        if(tailX[k]==j && tailY[k]==i)
                        {
                            cout<<"o";
                            print=true;
                        }

                    }
                      if(!print)
                            cout<<" ";
                }


               if(j==width-1)
                cout<<"#";
           }
           cout<<endl;
       }

    for(int i =0;i<width+2;i++)
        cout<<"#";
        cout<<endl;
        cout<<"Score:"<<score<<endl;

}
};
class C
{
    public:
    void input()
{
    if(_kbhit())
        {
        switch(_getch())
        {
        case 'a':
            dir=LEFT;
            break;
        case 'd':
            dir=RIGHT;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'w':
            dir=UP;
            break;
        case 'x':
            gameover=true;
            break;
        }
    }
}
};
class D
{
    public:
void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(int i=1;i<ntail;i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
switch(dir)
    {

        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;


    }
    if( x>width || x<0 || y>height || y<0)
        gameover=false;

        //x=rand()%width;

       for(int i=0;i<ntail;i++)
            if(tailX[i]==x && tailY[i]==y)
            gameover=true;


    if(x ==fruitX && y==fruitY)
    {

        score+=10;
         fruitX=rand()%width;
         fruitY=rand()%height;
         ntail++;
    }
}

};


class E
{
    public:
void setup1()
{
    gameover=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fruitX=rand()%width;
    fruitY=rand()%height;
    wallX=rand()%width;
    wallY=rand()%height;
    score=0;
}
};
class F
{
    public:
  void draw1()
{
    system("CLS");
    for(int i=0;i<width+2;i++)
        cout<<"#";
        cout<<endl;

       for(int i=0;i<height;i++)
       {
           for(int j=0;j<width;j++)
           {
               if(j==0)
                cout<<"#";
                if(i==y && j==x)
                    cout<<"0";
                    else if(i==fruitY && j==fruitX)
                        cout<<"@";
                else
                {
                     bool print =false;
                    for(int k=0;k < ntail ;k++)
                    {

                        if(tailX[k]==j && tailY[k]==i)
                        {
                            cout<<"o";
                            print=true;
                        }

                    }
                      if(!print)
                            cout<<" ";
                }


               if(j==width-1)
                cout<<"#";
           }
           cout<<endl;
       }

    for(int i =0;i<width+2;i++)
        cout<<"#";
        cout<<endl;
        cout<<"Score:"<<score<<endl;

}
};
class G
{
    public:
    void input1()
{
    if(_kbhit())
        {
        switch(_getch())
        {
        case 'a':
            dir=LEFT;
            break;
        case 'd':
            dir=RIGHT;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'w':
            dir=UP;
            break;
        case 'x':
            gameover=true;
            break;
        }
    }
}
};
class H
{
    public:
void logic1()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(int i=1;i<ntail;i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
switch(dir)
    {

        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;


    }
    if( x>width || x<0 || y>height || y<0)
        gameover=true;

        //x=rand()%width;

       for(int i=0;i<ntail;i++)
            if(tailX[i]==x && tailY[i]==y)
            gameover=true;


    if(x ==fruitX && y==fruitY)
    {

        score+=10;
         fruitX=rand()%width;
         fruitY=rand()%height;
         ntail++;
    }
}

};



int main()
{
    A obj;
    B obj1;
    C obj2;
    D obj3;
    E obj4;
    F obj5;
    G obj6;
    H obj7;
    int lev;
    cout<<"\tSNAKE GAME FORMAT 1\t"<<endl;
    cout<<"\t1)LEVEL 1"<<endl;
    cout<<"\t2)LEVEL 2"<<endl;
    cout<<"\nEnter the Level you want to play: "<<endl;
    cin>>lev;
    switch(lev)
    {
    case 1:
       obj.setup();
    while(!gameover)
    {
        obj1.draw();
        obj2.input();
        obj3.logic();
        Sleep(10);
    }
    break;
    case 2:
    obj4.setup1();
    while(!gameover)
    {
        obj5.draw1();
        obj6.input1();
        obj7.logic1();
        Sleep(0.1);
    }
    break;
    default:
        cout<<"Invalid choice of LEVEL!";
    }

    return 0;
}
