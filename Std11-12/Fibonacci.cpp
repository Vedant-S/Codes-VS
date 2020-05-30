#include<iostream>
 
using namespace std;
 
main()
{
   int n, i, first = 0, second = 1, next;
 
   cout << "Enter the number of terms of Fibonacci series you want" << endl;
   cin >> n;
 
   cout << "First " << n << " terms of Fibonacci series are :- " << endl;
 
   for ( i= 0 ; i< n ; i++ )
   {
      if ( i <= 1 )
         next = i;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }
 
   return 0;
}
