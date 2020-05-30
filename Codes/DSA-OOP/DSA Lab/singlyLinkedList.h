#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Node* insertBeg(Node* list, int x) {
  Node* t;

  t = (Node*)malloc(sizeof(Node));

  if (list == NULL) {
    list = t;
    list->data = x;
    list->next = NULL;
    return list;
  }

  t->data = x;
  t->next = list;
  list = t;

  return list;
}

Node* insertEnd(Node* list, int x) {
  Node *t, *temp;

  t = (Node*)malloc(sizeof(Node));

  if (list == NULL) {
    list = t;
    list->data = x;
    list->next = NULL;
    return list;
  }

  temp = list;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->data    = x;
  t->next    = NULL;

  return list;
}

void traverse(Node* list) {
  Node *t;

  t = list;

  if (t == NULL) {
    return;
  }

  while (t->next != NULL) {
    printf("%d ", t->data);
    t = t->next;
  }
  printf("%d\n", t->data);
}

Node* deleteBeg(Node* list) {
  Node *t;

  if (list == NULL) {
    return list;
  }

  t = list->next;
  free(list);
  list = t;

  return list;
}

Node* deleteEnd(Node* list) {
  Node *t, *u;

  if (list == NULL) {
    return list;
  }

  if (list->next == NULL) {
    free(list);
    list = NULL;
    return list;
  }

  t = list;

  while (t->next != NULL) {
    u = t;
    t = t->next;
  }

  u->next = NULL;
  free(t);

  return list;
}

int countNodes(Node* list) {
  int count = 0;
  while(list) {
    ++count;
    list = list->next;
  }
  return count;
}
