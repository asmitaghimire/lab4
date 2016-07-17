#include <stdio.h>
long int fact(int);
int main()
{
	int n,x;
	printf("Enter a number to get its factorial\n\a");
	scanf("%d",&n);
	x=fact(n);
	printf("The Factorial of %d is %d",n,x);
	return 1;
}

long int fact(int n)
{
if (n==1 || n==0)
return 1;
else
return (n*fact(n-1));	
}

