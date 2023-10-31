#include<stdio.h>
main()
{
	int mat1[3][3] = {4,5,2,6,1,3};
	int mat2[3][3] = {3,4,2,1,9,3};
	int c[3][3];
	int row,col;
	
	printf("First Matrix\n");
	
	for(row = 0;row<2;row++){
		
		for(col = 0; col<3;col++){
			
			printf("%d",mat1[row][col]);
		}
		printf("\n");
	}
	printf("Second Matrix\n");
	
		for(row = 0;row<2;row++){
		
		for(col = 0; col<3;col++){
			
			printf("%d",mat2[row][col]);
		}
		printf("\n");
	}
	printf("Addition Matrix\n");
	
	for(row = 0;row<2;row++){
		
		for(col = 0;col<3;col++){
			
			c[row][col] = mat1[row][col] + mat2[row][col];
			printf("%d",c[row][col]);
		}
		printf("\n");
	}
	
	printf("Subtraction Matrix\n");
	
	for(row = 0;row<2;row++){
		
		for(col = 0;col<3;col++){
			
			c[row][col] = mat1[row][col] - mat2[row][col];
			printf("%d",c[row][col]);
		}
			printf("\n");
	}
	
	printf("Multiplication Matrix\n");
	
	for(row = 0;row<2;row++){
		
		for(col = 0;col<3;col++){
			
			c[row][col] = mat1[row][col] * mat2[row][col];
			printf("%d",c[row][col]);
		}
			printf("\n");
	}
	
}
