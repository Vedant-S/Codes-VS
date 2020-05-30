#include<iostream>
#include<cstdlib>
using namespace std;
class stack
{
	
struct node
{
    char data;
    node *next;
	
};
	node *temp,*x,*top,*next;
	public:stack()
	{
		top=NULL;
    }
		void push();
		void pop();
		void display();
};
	void stack::push()
	{
		x=new node;
		cout<<"enter value"<<endl;
		cin>>x->data;
		x->next=top;
		top=x;
	}
	
	void stack::pop()
	{
		if(top==NULL)
		{
			cout<<"stack underflow"<<endl;
		}
		else
		{
			temp=top;
			top=top->next;
			delete temp;
		}
	}
	
	void stack::display()
	{
		if(top==NULL)
		{
			cout<<"stack is empty"<<endl;
		}
		else
		{
			cout<<"current stack is :";
			for(temp=top;temp!=NULL;temp=temp->next)
			{
				cout<<temp->data;
				cout<<" ";
			}
		}
	}
	
	int main()
	{
		system("color f0");
		stack s;
		int op;
		while(1<2)
		{
			cout<<"1.push"<<endl;
			cout<<"2.pop"<<endl;
			cout<<"3.display"<<endl;
			cout<<"4.exit"<<endl;
			cin>>op;
			switch(op)
			{
				case 1:s.push();
				       s.display();
				       cout<<"\n\n";
				       continue;
				
				case 2:s.pop();
				       s.display();
				       cout<<"\n\n";
				       continue;
				
				case 3:s.display();
				       cout<<"\n\n";
					   continue;
				case 4:exit(0);
				default:cout<<"invaid option!"<<endl;
				continue;
			}
		}
	}

