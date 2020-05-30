#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
class list
{
	struct node
	{
		short unsigned int roll;
		char name[30];
		float percent;
		node *link;
	}*start,*last;
	
	int n;
	public:
		list()
		{
			start=last=NULL;
		}
		void create()
		{
			cout<<"Enter no. of nodes to be created \n";
			cin>>n;
			node *temp,*last;
			
			for(int i=0;i<n;i++)
			{
				temp=new node;
				
				cout<<"Enter Roll No : "; cin>>temp->roll;
				cout<<"Enter Name : ";cin>>temp->name;
				cout<<"Enter Percentage : "; cin>>temp->percent;
				if(i==0)
				{
					start=temp;
					last=temp;
				
				}
				else
				{
					last->link=temp;
					last=temp;
					
				}
				
			}
		}
		void display()
		{
			cout<<"ROLL"<<setw(10)<<"NAME"<<setw(10)<<"PERCENT"<<endl;
			node *temp;
			for(temp=start;temp!=NULL;temp=temp->link)
			{
				cout<<temp->roll<<setw(10)<<temp->name;

				cout<<setw(10)<<temp->percent;
				cout<<endl;
			}
		}
};

int main()
{
	list l;
	int ch;
	do
	{
		cout<<"\n\n\nEnter \n1: To Create new Nodes\n2: To Display Linked List\n3: To Exit\n";
		cin>>ch;
		switch (ch)
		{
			case 1:l.create();
					break;
					
			case 2: l.display();
					break;
					
			case 3: break;				
		}
	}while(ch!=3);
	return 0;
}
