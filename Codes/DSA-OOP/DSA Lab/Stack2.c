#include "stack.h"

/*** AVAILABLE FUNCTIONS ***/
int isEmpty(Stack*);
void push(Stack*, int);
int pop(Stack*);
int peek(Stack*);

/*** YOUR FUNCTIONS ***/
//Write one function to convert infix expression to postifx expression using stack. Write another function to evaluate a postfix expression
int prec(char c) {
  switch(c) {
    case '(': return 0;
    case '+':;
    case '-': return 1;
    case '*':;
    case '/': return 2;
    case '^': return 3;
  }
}

void printPostfix(char* expr) {
  Stack stk = {NULL};
  for(int i = 0; expr[i]; ++i) {
    char c = expr[i];
    //TODO: implement the algorithm to convert infix expression to postfix expression using stack based on the value of current input symbol c: if c is opening parenthesis, simply push it on to the stack, if c is an operand just print it, if c is a closing parenthesis pop and print all elements of stack until an opening parenthesis is encountered, otherwise c is an operator and we should pop and print all operators from the stack with equal or higher precedence than c before pushing c itself on the stack
    if(c=='(')
        {push(&stk,c);}
    else if (c>='0' && c<='9')
        {printf("%d", c);}
    else if (c==')')
        {
        if(c=='(')
            {
                c=pop(&stk);
                while(!isEmpty(&stk))
                printf("%d ", pop(&stk));
            }
        else
            {
                while(!isEmpty(&stk))
                printf("%d ", pop(&stk));
            }
        }

    //TODO ENDS
  }
  //TODO: Empty the stack printing any values left in the stack
    while(!isEmpty(&stk))
    printf("%d ", pop(&stk));
  //TODO ENDS
  printf("\n");
}

int evalPostfix(char* pfx) {
  Stack stk = {NULL};
  for(int i = 0; pfx[i]; ++i) {
    char c = pfx[i];
    if(c>='0' && c<='9') push(&stk, c-'0');
    else {
      //TODO: Evaluate the postfix expression by popping two values from the stack and performing the operation based on the value of c and pushing the result back to the stack
        int x = pop(&stk);
        int y = pop(&stk);
      //TODO ENDS
    }
  }
  return peek(&stk);
}

/*** MAIN DRIVER ***/
int main() {
  char * expr = "2+5*(3^2-6)^(4+3*2)/9/3-8";
  //ASSIGNMENTS
  printPostfix(expr);
  char * pfx = "2532^6-432*+^*9/3/+8-";
  printf("%d\n", evalPostfix(pfx));
}
