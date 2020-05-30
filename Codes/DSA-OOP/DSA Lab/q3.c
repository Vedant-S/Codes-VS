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
//WAP to search an element in a simple linked list, if found delete that node.
Node * deleteValue(Node * list, int val) {
  //TODO: Delete the first node found with value val
  //int x=countNodes(list);
  Node *t;
  for(t=list;t->next!=NULL;t=t->next)
   if(t->next->data==val)
   {
       Node *temp=t->next;
       t->next=temp->next;
       free(temp);
   }

return list;
  //TODO ENDS
}

/*** MAIN DRIVER ***/
int main () {
  int integers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4, -1};
  Node *list = NULL;
  for(int i = 0; integers[i]!=-1; ++i) list = insertBeg(list, integers[i]);
  traverse(list);
  printf("List contains %d elements.\n\n", countNodes(list) );

  //ASSIGNMENTS
  traverse(list = deleteValue(list, 9));
}
