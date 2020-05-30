/*** THE DATA STRUCTURE ***/
typedef struct node {
  int data;
  struct node *next;
} Node;

/*** AVAILABLE FUNCTIONS ***/
Node* insertBeg(Node*, int);
Node* insertEnd(Node*, int);
void traverse(Node*);
Node* deleteBeg(Node*);
Node* deleteEnd(Node*);
int countNodes(Node*);

/*** IMPORT AVAILABLE FUNCTIONS ***/
#include "ds.h"

/*** YOUR FUNCTIONS ***/
//WAP to Swap first node with the last node in a Linked List.
Node * swapFirstAndLast(Node * list) {
  //TODO: Swap first and last nodes
  Node*parent=list;
  while(parent->next->next)parent=parent->next;

  Node*temp=list;
  list=parent->next;
  parent->next=temp;

  temp=parent->next->next;
  parent->next->next=list->next;
  list->next=temp;
  //TODO ENDS
  return list;
}

/*** MAIN DRIVER ***/
int main () {
  int integers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4, -1};
  Node *list = NULL;
  for(int i = 0; integers[i]!=-1; ++i) list = insertBeg(list, integers[i]);
  traverse(list);
  printf("List contains %d elements.\n\n", countNodes(list) );

  //ASSIGNMENTS
  traverse(list = swapFirstAndLast(list));
}

