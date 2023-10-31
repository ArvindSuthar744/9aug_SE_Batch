#include<stdio.h>
int factorial(int a)
{
	
	if(a>1)
	{
		return a * factorial(a-1);
	}
}
main()
{
	printf("Factorial: %d",factorial(5));
}
