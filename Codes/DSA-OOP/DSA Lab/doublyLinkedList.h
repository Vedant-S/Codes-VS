#include <stdio.h>
#include <stdlib.h>
#include <math.h>

DblyList insertBeg(DblyList list, int x) {
  DblyNode * t = (DblyNode*)malloc(sizeof(DblyNode));
  t->prev = NULL;
  t->data = x;
  if(list.start == NULL) {
    t->next = NULL;
    list.start = list.end = t;
  } else {
    t->next = list.start;
    list.start->prev = t;
    list.start = t;
  }
  return list;
}

DblyList insetEnd(DblyList list, int x) {
  DblyNode * t = (DblyNode*)malloc(sizeof(DblyNode));
  t->next = NULL;
  t->data = x;
  if(list.end == NULL) {
    t->prev = NULL;
    list.end = list.start = t;
  } else {
    t->prev = list.end;
    list.end->next = t;
    list.end = t;
  }
  return list;
}

DblyList deleteBeg(DblyList list) {
  DblyNode * tmp = list.start;
  list.start = tmp->next;
  list.start->prev = NULL;
  free(tmp);
  return list;
}

DblyList deleteEnd(DblyList list) {
  DblyNode * tmp = list.end;
  list.end = tmp->prev;
  list.end->next = NULL;
  free(tmp);
  return list;
}

int countNodes(DblyList list) {
  int count = 0;
  while(list.start) {
    ++count;
    list.start = list.start->next;
  }
  return count;
}

void traverseFwd(DblyList list) {
  DblyNode * tmp = list.start;
  while(tmp) {
    printf("%d ", tmp->data);
    tmp = tmp->next;
  }
  printf("\n");
}

void traverseBwd(DblyList list) {
  DblyNode * tmp = list.end;
  while(tmp) {
    printf("%d ", tmp->data);
    tmp = tmp->prev;
  }
  printf("\n");
}

