#include <stdio.h>
int fibonacci(int n) {
if (n <= 1) 
{
 return n;
 } else {
 return fibonacci(n - 1) + fibonacci(n - 2);
 }
}
int main() 
{
 int n;
 printf("Enter the number of terms in the Fibonacci sequence: ");
 scanf("%d", &n);
 printf("Fibonacci Sequence:\n");
 int i;
 for (i = 0; i < n; i++) {
 printf("%d ", fibonacci(i));
 }
 return 0;
}
