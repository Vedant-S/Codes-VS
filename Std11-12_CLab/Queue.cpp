#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class queue
{
	struct node
	{
		char data;
		node *link;
	};node*front,*rear,*temp,*x;
	public:
		queue()
		{
			front =NULL;
			rear=NULL;
		}
		void enqueue()
		{
			x=new node;
			x->link=NULL;
			cout<<"Enter data:";
			cin>>x->data;
			if(rear==NULL)
			{
				front=x;
				rear=x;
			}
			else
			{
				rear->link=x;
				rear=x;
			}
		}
		void dequeue()
		{
			if(front==NULL)
			{
				cout<<"Queue Underflow"<<endl;
			}
			else if(front->link==NULL)
			{
				temp=front;
				front=NULL;
				rear=NULL;
				delete temp;
			}
			else
			{
				temp=front;
				front=front->link;
				delete temp;
			}
		}
		void display()
		{
			if(front==NULL)
			{
				cout<<"Queue is empty\n";
				
			}
			else
			{
				for(temp=front;temp!=NULL;temp=temp->link)
				{
					cout<<temp->data<<" ";
				}
				
			}
		}
};
int main()
{
	queue q1;int choice;
	while(1<2)
	{
		cout<<endl;
		cout<<"1.Enqueue\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Display\n";
		cout<<"4.Exit\n";
		cin>>choice;
		cout<<endl;
		switch(choice)
		{
			case 1:q1.enqueue();
					getch();
					continue;
			case 2:q1.dequeue();
					getch();
					continue;
			case 3:q1.display();
					getch();
					continue;
			case 4: exit(0);
			default:cout<<"Invalid Option";
					getch();continue;
					
		}
	}
	return 0;
}


