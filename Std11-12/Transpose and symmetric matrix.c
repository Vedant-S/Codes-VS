#include<stdio.h>
#include<conio.h>
 
int main()
{
   int m, n, c, d, matrix[10][10], transpose[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&m,&n);
   printf("Enter the elements of matrix\n");
 
   for (  c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         scanf("%d",&matrix[c][d]);
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         transpose[d][c] = matrix[c][d];
      }
   }
 
   if ( m == n ) /* check if order is same */
   {
       for ( c = 0 ; c < m ; c++ )
       {
           for ( d = 0 ; d < m ; d++ )
           {
               if ( matrix[c][d] != transpose[c][d] )
                  break;
           }
           if ( d != m )
              break;
       }
       if ( c == m )
          printf("Symmetric matrix.\n");
   }
   else
       printf("Not a symmetric matrix.\n");
 
   return 0;
}