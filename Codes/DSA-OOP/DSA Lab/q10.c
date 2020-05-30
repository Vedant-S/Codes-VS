/*** THE DATA STRUCTURE ***/
typedef struct node {
  int x, y;
  struct node *next;
} Node;

/*** AVAILABLE FUNCTIONS ***/
Node* insertNode(Node* list, int x, int y);
void traverseCircular(Node* list);
Node* deleteNode(Node* list);
int countNodes(Node* list);

/*** IMPORT AVAILABLE FUNCTIONS ***/
#include "circularLinkedList.h"

/*** YOUR FUNCTIONS ***/
//WAP to find the perimeter of a polygon.
float computePerimeter(Node* list) {
  float perimeter = 0;
  //TODO: Compute the perimeter by adding distance between every two adjacent vertices; the vertices being stored in a circular linked list

  //TODO ENDS
  return perimeter;
}

/*** MAIN DRIVER ***/
int main () {
  int integers[] = {-2,-2,2,-2,2,2,-2,2,-1};
  Node* list = NULL;
  for(int i = 0; integers[i]!=-1; i+=2) list = insertNode(list, integers[i], integers[i+1]);
  traverseCircular(list);
  printf("List contains %d elements.\n\n", countNodes(list) );

  //ASSIGNMENT
  printf("The perimeter is %f\n", computePerimeter(list));
}

/*
Circular linked list
  insertNode
  deleteNode
  countNodes
  traverse

Find the perimeter of the polygon.
*/
