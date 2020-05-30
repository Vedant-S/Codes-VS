#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Node
{
 int ID;
 struct Node *next;
}*head;

static int count=0;
void Insert_Begin()
{
 struct Node *nn=(struct Node *)malloc(sizeof(struct Node));
 printf("Enter ID: ");
 scanf("%d",&(nn->ID));

 if(head==NULL)
 {
  head=nn;
  return;
 }
 nn->next=head;
 head=nn;
}

void Insert_End()
{
 struct Node *nn=(struct Node *)malloc(sizeof(struct Node));
 printf("Enter ID: ");
 scanf("%d",&(nn->ID));
 if(head==NULL)
 {
  head=nn;
  return;
 }
 struct Node *temp = head;
 for(;temp->next!=NULL;temp=temp->next);
 temp->next=nn;
 nn->next=NULL;
 temp=nn;
}

void Insert(int pos)
{
 count++;
 if(pos==0)
 {
  Insert_Begin();
  return;
 }
 if(pos==count-1)
 {
  Insert_End();
  return;
 }
 struct Node *temp=head;
 if(pos<count-1)
 {
 struct Node *nn=(struct Node *)malloc(sizeof(struct Node));
 printf("Enter ID: ");
 scanf("%d",&nn->ID);
  for(int i=0;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
  nn->next=temp->next;
  temp->next=nn;
 }
}
/*
void Delete()
{
 if(head==NULL)
 {
  printf("List is Empty!"); //Underflow
  return;
 }
 if(Start==End)
 {
  printf("Deleted Items: \n");
  puts(Start->Name);
  printf("%d",Start->Sal);
  Start=0;
  End=0;
 }
 else
 {
  temp=Start;
  printf("Deleted Items: \n");
  puts(Start->Name);
  printf("%d",Start->Sal);
  Start=Start->next;
  free(temp);
 }
}
*/
void Display()
{
 struct Node *temp=head;
 if(head==NULL)
 {
  printf("No element in List!\n"); //Underflow
  return;
 }
  printf("____________________________________________________________\n");
  for(;temp!=NULL;temp=temp->next)
  {
   printf("Employee ID: %d\n",temp->ID);
   printf("---------------------------\n");
  }
}

int main()
{
 char w;
 do
 {
  int ch=0,p=0;
  printf("1. Insert Element\n3. Display Elements\n4. Exit\n");
  printf("Enter choice (1-4):");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter position to enter element:");
          scanf("%d",&p);
          Insert(p);
      printf("Nodes Inserted: %d\n",count);
   break;/*
   case 2:printf("Enter position to enter element:");
          scanf("%d",&p);
          Delete(p);
   break;*/
   case 3:Display();
   break;
   case 4:exit(0);
   break;
   default:printf("Wrong Choice! ");
  }
  printf("Want to Enter more? (Y/N): ");
  scanf(" %c",&w);
  printf("------------------------------------\n");
 }while(w=='Y' || w=='y');
return 0;
}
