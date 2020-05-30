#include <stdio.h>
#include <math.h>

/*** THE DATA STRUCTURES ***/
#define N 10
typedef struct {
  int start, end;
  int data[N];
} Queue;

//Using array implement all essential functions of a queue: enqueue, dequque, count, isEmpty, isFull
void enqueue(Queue* q, int x)  {
  //TODO: enqueue x in a circular queue (2 lines)
   if(q->end!=N-1 && q->start!=q->end)
       q->data[q->end++]=x;
  //TODO ENDS
}

int dequeue(Queue* q){
  //TODO: remove and return one element from circular queue (3 lines)
    /*int n = q->start->data;
    q->start = deleteBeg(q->start);
    return n;*/

  //TODO ENDS
}

int count(Queue* q) {
  //TODO: Return total number of elements in the queue (1 line)

  //TODO ENDS
}

int isEmpty(Queue* q) {
  //TODO: Return 0 if queue is not empty (1 line)

  //TODO ENDS
}

int isFull(Queue* q) {
  //TODO: Return 0 if queue is not full (1 line)

  //TODO ENDS
}

typedef struct {
  int cur;
  Queue q[2];
} Stack;

//Using two queues implement all essential functions of a stack: isStackFull, isStackEmpty, push and pop
int isStackFull(Stack* s) {
  //TODO: Check if current queue is full and return appropriate value (1 line)
  //TODO ENDS
}

int isStackEmpty(Stack* s) {
  //TODO: Check if current queue is empty and return appropriate value  (1 line)
  //TODO ENDS
}

void push(Stack* s, int x) {
  //TODO: Enqueue the incoming value to the current queue (1 line)
    enqueue(q1,x);
  //TODO ENDS
}

int pop(Stack* s) {
  //TODO: Move all elements from current queue to other queue except the last one. Return the last element's value from the current queue but also remember to swap current queue with other queue (4 lines)
  for(int i=start;i<end;i++)
    enqueue(q2,dequeue(q1));
  return q1[end];
  //TODO ENDS
}

/*** MAIN DRIVER ***/
int main () {
  int integers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4, -1};
  //ASSIGNMENTS
  Queue q1 = {0,0};

  for(int i = 0; integers[i]!=-1; ++i) {
    if(!isFull(&q1))
      enqueue(&q1, integers[i]);
    else
      printf("adding %d, but full\n", integers[i]);
  }

  while(!isEmpty(&q1))
    printf("%d ", dequeue(&q1));
  printf("\n");

  Stack s1 = {0};

  for(int i = 0; integers[i]!=-1; ++i) {
    if(!isStackFull(&s1))
      push(&s1, integers[i]);
    else
      printf("adding %d, but full\n", integers[i]);
  }

  while(!isStackEmpty(&s1))
    printf("%d ", pop(&s1));
  printf("\n");
}
