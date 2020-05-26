#include<stdio.h>
#include<stdlib.h>

struct Poly
{
 int exp;
 float coeff;
 struct Poly *next;
}*head1,*head2,*headSum,*headProd;

struct Poly *Insert_End(struct Poly *head,int ex,float coef)
{
 struct Poly *nn=(struct Poly*)malloc(sizeof(struct Poly));
 nn->exp=ex;
 nn->coeff=coef;
if(head==NULL)
 {
  head=nn;
  nn->next=NULL;
  return head;
 }
 struct Poly *temp = head;
 for(;temp->next!=NULL;temp=temp->next);
 temp->next=nn;
 temp=nn;
 nn->next=NULL;
 return head;
}

struct Poly *Add(struct Poly *head1,struct Poly *head2)
{
 struct Poly *temp1=head1,*temp2=head2;
 while(temp1!=NULL && temp2!=NULL)
  if(temp1->exp > temp2->exp)
   {
   headSum=Insert_End(headSum,temp1->exp,temp1->coeff);
   temp1=temp1->next;
   }
   else if(temp1->exp==temp2->exp)
   {
    headSum=Insert_End(headSum,temp2->exp,temp1->coeff+temp2->coeff);
    temp1=temp1->next;temp2=temp2->next;
   }
   else if(temp1->exp < temp2->exp)
   {
   headSum=Insert_End(headSum,temp2->exp,temp2->coeff);
   temp2=temp2->next;
   }
   return headSum;
}

struct Poly *Multiply(struct Poly *head1,struct Poly *head2)
{
 headProd = Insert_End(headProd, head1->exp+head2->exp, head1->coeff * head2->coeff);
 struct Poly *temp1,*temp2,*temp;
 for(temp1=head1;temp1!=NULL;temp1=temp1->next)
  for(temp2=head2;temp2!=NULL;temp2=temp2->next)
  {
  for(temp=headProd;temp->next!=NULL;temp=temp->next)
   if(temp->exp!=temp1->exp + temp2->exp)
    headProd = Insert_End(headProd,temp1->exp + temp2->exp, temp1->coeff * temp2->coeff);
   else
    temp->coeff+=temp1->coeff*temp2->coeff;
  }

  return headProd;
}

void Display(struct Poly *head)
{
 struct Poly *temp=head;
 if(head==NULL)
 {
  printf("No element in List!\n"); //Underflow
  return;
 }
   printf("---------------------------------------------\n");
  for(;temp->next!=NULL;temp=temp->next)
  {
   printf(" %.1fX^%d +",temp->coeff,temp->exp);
  }
  printf(" %.1fX^%d \n",temp->coeff,temp->exp);
}

int main()
{
char w='y';

printf("Enter 1st polynomial:- \n");
do
 {
  int ch=0,e=0;
  float c=0.0;
  printf("1. Insert Term\n2. Display\n3. Exit\n");
  printf("Enter choice(1-3):");scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter Exponent of X: ");
          scanf("%d",&e);
          printf("Enter Coefficient of X^%d: ",e);
          scanf("%f",&c);
          head1=Insert_End(head1,e,c);
   break;
   case 2:
       Display(head1);
   break;
   case 3:exit(0);
   break;
  }
  printf("Want to Enter More? (Y/N): ");
  scanf(" %c",&w);
  printf("_____________________________________________________________________________\n");
 }while(w=='Y' || w=='y');

 printf("Enter 2nd polynomial:- \n");
do
 { // All positions start from 1 !
  int ch=0,e=0;
  float c=0.0;
  printf("1. Insert Term\n2. Display\n3. Exit\n");
  printf("Enter choice(1-3):");scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter Exponent of X: ");
          scanf("%d",&e);
          printf("Enter Coefficient of X^%d: ",e);
          scanf("%f",&c);
          head2=Insert_End(head2,e,c);
   break;
   case 2:Display(head2);
   break;
   case 3:exit(0);
   break;
  }
  printf("More number of terms? (Y/N): ");
  scanf(" %c",&w);
  printf("_____________________________________________________________________________\n");
 }while(w=='Y' || w=='y');
 //headSum=Add(head1,head2);printf("\n");
 //Display(headSum);
 headProd=Multiply(head1,head2);printf("\n");
 Display(headProd);
printf("\n");
return 0;
}
