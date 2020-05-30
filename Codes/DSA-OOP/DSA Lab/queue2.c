#include "stack.h"

/*** AVAILABLE FUNCTIONS ***/
int isEmpty(Stack*);
void push(Stack*, int);
int pop(Stack*);
int peek(Stack*);

typedef struct {
  int cur;
  Stack s[2];
}Queue;

//Using two stacks implement all essential functions of a queue: enqueue, dequeue and isEmptyQueue
void enqueue(Queue *q, int x)
{
  //TODO: Store the incoming value in the first stack (1 line)
  push(s[0],x);
  //TODO ENDS
}

int dequeue(Queue * q) {
  //TODO: Pop and return a value from second stack but if second stack is empty, unload all the values from first stack to the second and then return the value from the second stack (4-7 lines)
  while(!isEmpty(s[0]))
  {
      push(s[1],pop(s[0]));
  }
  return pop(s[0]);
  //TODO ENDS
}

int isEmptyQueue(Queue * q) {
  //TODO: Check is values are available on at least one of the stacks (1 line)
    if(peek(s[0]) || peek(s[1]))return 1; else return 0;
  //TODO ENDS
}

int main() {
  int integers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4, -1};
  //ASSIGNMENTS
  Queue q = {0};
  for(int i = 0; integers[i]!=-1; ++i) enqueue(&q, integers[i]);
  while(!isEmptyQueue(&q)) printf("%d ", dequeue(&q));
  printf("\n");
}
