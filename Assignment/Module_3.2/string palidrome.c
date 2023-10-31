#include<stdio.h>
main()
{
	char str[20];
	char rev[20];
	
	printf("Enter String : ");
	scanf("%s",&str);
//	printf("Reverse string :%s ",strrev(str));

	rev =strrev(str);
	printf("\nreverse :%s",rev);
	
	if(strcmp(str,rev)==0 ) {
		
		printf("\nString is Palidrome ");
	}
	else {
		printf("\nString is not Palidrome ");
	}
	

}
