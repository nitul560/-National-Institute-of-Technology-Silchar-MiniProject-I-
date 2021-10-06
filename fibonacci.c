#include <stdio.h>
unsigned long fib(int n)
{
  unsigned long a = 0, b = 1, c;
 int i; 
 if( n == 0)
   return a;
 for (i = 2; i <= n; i++)
 {
   c = a + b;
   a = b;
   b = c; 
 }
 return b;
}

int main () {
  int n;
  printf("Enter a number between 0-20000: \n");
  scanf("%d",&n);
  printf(" %d th Fibonacci number is :%lu",n, fib(n));

return 0; }
