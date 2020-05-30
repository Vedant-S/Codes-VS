/*** THE DATA STRUCTURE ***/
typedef struct node {
  int data;
  struct node *prev, *next;
} DblyNode;

typedef struct {
  DblyNode * start, * end;
} DblyList;

/*** AVAILABLE FUNCTIONS ***/
DblyList insertBeg(DblyList list, int x);
DblyList insetEnd(DblyList list, int x);
DblyList deleteBeg(DblyList list);
DblyList deleteEnd(DblyList list);
int countNodes(DblyList list);
void traverseFwd(DblyList list);
void traverseBwd(DblyList list);

/*** IMPORT AVAILABLE FUNCTIONS ***/
#include "doublyLinkedList.h"

/*** YOUR FUNCTIONS ***/
//WAP to rotate a doubly linked list counter-clockwise by k nodes.
DblyList rotateCcw(DblyList list, int k) {
  //TODO: Rotate the doubly linked list counter-clockwise by k nodes
   if (k == 0)
        return list;
    DblyNode *t = list;
    int count = 1;
    while (count < k && t != NULL) {
        t = t->next;
        count++;
    }
    if (t == NULL)
        return list;
    DblyNode *N = t;
    while (t->next != NULL)
        t = t->next;
    t->next = list;
    list->prev = t;
    list = N->next;
    list->prev = NULL;
    N->next = NULL;
  //TODO ENDS
   return list;
}

/*** MAIN DRIVER ***/
int main () {
  int integers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4, -1};
  DblyList list = {NULL, NULL};
  for(int i = 0; integers[i]!=-1; ++i) list = insertBeg(list, integers[i]);
  traverseFwd(list);
  printf("List contains %d elements.\n\n", countNodes(list) );

  //ASSIGNMENT
  traverseFwd(list = rotateCcw(list, 4));
  traverseBwd(list);
}

/*
Circular linked list
  insertNode
  deleteNode
  countNodes
  traverse

Find the perimeter of the polygon.
*/
