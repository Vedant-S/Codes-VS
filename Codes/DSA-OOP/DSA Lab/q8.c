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
//WAP to reverse a Doubly Linked List.
DblyList reverse(DblyList list) {
  //TODO: Reverse the doubly linked list
  DblyNode * tmp = list.end;
  while(tmp) {
    printf("%d ", tmp->data);
    tmp = tmp->prev;
  }
  printf("\n");
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
  traverseFwd(list = reverse(list));
  traverseBwd(list);
}
