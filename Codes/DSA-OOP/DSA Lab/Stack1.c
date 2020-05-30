#include "stack.h"

/*** AVAILABLE FUNCTIONS ***/
int isEmpty(Stack*);
void push(Stack*, int);
int pop(Stack*);
int peek(Stack*);

/*** YOUR FUNCTIONS ***/
//WAP to reverse the contents of a stack without using another stack
void insertAtBottom(Stack * stk, int x) {
  //TODO: Finish this recursive function to shift x to the bottom of the stack
  int y;
  if(isEmpty(stk))
  push(stk,x);
  else
  {
  y=pop(stk);
  insertAtBottom(stk,x);
  push(stk,y);
  }
  //TODO ENDS
}
void reverseStack(Stack* stk) {
  //TODO: Finish this recursive function that calls itself after popping an element and then inserts the popped element at the bottom
   int x;
   if(!isEmpty(stk))
   {
   x=pop(stk);
   reverseStack(stk);
   insertAtBottom(stk,x);
   }
  //TODO ENDS
}

/*** MAIN DRIVER ***/
int main () {
  int integers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4, -1};
  Stack stk = {NULL};
  for(int i = 0; integers[i]!=-1; ++i) push(&stk, integers[i]);
  printf("Stack contents:\n");
  while(!isEmpty(&stk))
    printf("%d ", pop(&stk));
  printf("\n");
  for(int i = 0; integers[i]!=-1; ++i) push(&stk, integers[i]);
  //ASSIGNMENTS
  reverseStack(&stk);
  printf("Stack contents:\n");
  while(!isEmpty(&stk))
    printf("%d ", pop(&stk));
  printf("\n");
}
