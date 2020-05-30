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
//WAP to print m-th node from the end of a linked list.
void printFromEnd(Node * list, int m) {
  int val = 0;
int x=countNodes(list);
  //TODO: Compute the correct value of val
// for(int n = countNodes(list)-m;n!=0;--n)
 for(int n=0;n!=x-m;n++)
   list=list->next;

  val=list->data;
  //TODO ENDS

  printf("%d-th node from end is %d\n", m, val);
}

/*** MAIN DRIVER ***/
int main () {
  int integers[] = {3, 1, 4, 0, 5, 9, 2, 6, 7, 4, -1};
  Node *list = NULL;
  for(int i = 0; integers[i]!=-1; ++i) list = insertBeg(list, integers[i]);
  traverse(list);
  printf("List contains %d elements.\n\n", countNodes(list) );

  //ASSIGNMENTS
  printFromEnd(list, 6);
}
