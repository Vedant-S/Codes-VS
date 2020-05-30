#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Node* insertNode(Node* list, int x, int y) {
  Node* t;

  t = (Node*)malloc(sizeof(Node));
  t->x = x;
  t->y = y;

  if (list == NULL)
    t->next = t;
  else {
    Node * tmp = list;
    while(tmp->next != list) tmp = tmp->next;
    tmp->next = t;
    t->next = list;
  }
  return t;
}

void traverseCircular(Node* list) {
  if (list == NULL) {
    return;
  }

  Node *t = list;
  do {
    printf("(%d, %d) ", t->x, t->y);
    t = t->next;
  } while (t != list);

  printf("\n");
}

Node* deleteNode(Node* list) {
  Node *t;

  if (list == NULL) {
    return list;
  }

  t = list->next;
  if(t==list) {
    free(list);
    return NULL;
  } else {
    free(list);
    return t;
  }
}

int countNodes(Node* list) {
  int count = 0;
  if(list == NULL) return count;
  Node * t = list;
  do {
    ++count;
    t = t->next;
  } while( t != list );
  return count;
}
