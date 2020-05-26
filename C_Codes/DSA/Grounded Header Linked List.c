#include <stdio.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;

struct node* create();
struct node* display();

int main()
{
  int option;
  do
  {
   printf("\n\n -----Main Menu-----");
   printf("\n 1. Create a list");
   printf("\n 2. Display the list");
   printf("\n 3. Exit");
   printf("\n Enter your choice : ");
   scanf("%d", &option);
   switch(option)
   {
    case 1:
      create();
      printf("\n Header Linked List Created Successfully");
      break;
    case 2:
      display();
      break;
   }
  }while(option != 3);
 return 0;
}

//Create the Grounded Header Link List
void create()
{
  struct node *new_node, *ptr, *hn;
  int num;
  printf("\n Enter -1 to end");
  printf("\n Enter the data :");
  scanf("%d", &num);
  while(num != -1)
  {
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;

    if(head == NULL)
    {
      //hn represents the header node
      hn = (struct node*)malloc(sizeof(struct node));
      head = hn;
      hn -> next = new_node;
    }
    else
    {
      for(ptr = head -> next; ptr -> next != NULL; ptr = ptr -> next);
      ptr -> next = new_node;
    }
    printf("\n Enter the data :");
    scanf("%d", &num);
   }
}

//Create the Grounded Header Link List
void display()
{
  struct node *ptr;
  ptr = head;
  ptr = ptr -> next;
  while(ptr != NULL)
  {
    printf("\t %d",ptr -> data);
    ptr = ptr -> next;
  }
}
