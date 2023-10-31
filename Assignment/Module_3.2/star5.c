#include<stdio.h>
main()
{
	int i;
	int j;
	int k;
	
	for(i =1;i <= 5; i++)
	{
		for(j =1; j <= 5-i; j++)
		{
			printf(" ");
		
		}
		for(k = 1; k <= i; k++)
		{
			printf("* ");
		}
	
		printf("\n");

	}
}
