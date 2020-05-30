typedef struct node {
  int data;
  struct node *next;
} Node;

#include "singlyLinkedList.h"

typedef struct { Node * top; } Stack;
int isEmpty(Stack* stk) { return stk->top == NULL; }
void push(Stack* stk, int x) { stk->top = insertBeg(stk->top, x); }
int pop(Stack* stk) {
  int n = stk->top->data;
  stk->top = deleteBeg(stk->top);
  return n;
}
int peek(Stack* stk) { return stk->top->data; }
