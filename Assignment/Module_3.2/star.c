#include<stdio.h>
main()
{
	int row;
	int col;
	int i;
	int j;
	
	for(row = 1;row <= 5; row++)
	{
		
		for(col = 1; col <= row; col++)
		{
			printf("* ");
			
		}
		
			printf("\n");
	}
	
		for(i = 6;i >= 1; i--)
		{
			for(j = 1; j <= i; j++)
			{
				printf("* ");
			}
			
			printf("\n");
		}
	
}
