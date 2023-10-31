#include<stdio.h>
main()
{
	int i;
	int j;
	int n = 1;
	for(i =1;i <= 5; i++)
	{
		for(j =1; j <= i; j++)
		{
			printf("%d",n);
			n = n+ 1;
		}
		printf("\n");
	}
}
