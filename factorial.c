#include <stdio.h>

int fact(int n);

int main() 
{
int n;
printf("Enter a non-negative integer to find its factorial: ");
scanf("%d", &n);
if (n < 0) 
{
printf("Factorial is not defined for negative numbers.\n");
}
else 
{
printf("Factorial of %d is %d\n", n, fact(n));
}
return 0;
}

int fact(int n) 
{
if (n == 0) 
{
return 1;  
}
return n * fact(n - 1);  
}
