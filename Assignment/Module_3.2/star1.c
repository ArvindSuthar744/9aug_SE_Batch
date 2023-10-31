#include<stdio.h>
main()
{
	int row;
	int col;
	int ascci = 64;
	for(row = 0; row <= 5; row++)
	{
		for(col = 1; col <= row; col++)
		{
			ascci++;
			printf("%c",ascci);
		}
		printf("\n");
	}
}
