#include<stdio.h>
main()
{
	int num=2021;
	
	if (((num % 400 == 0) || (num % 100 != 0) )&& (num % 4 == 0) ){
		printf("Leap year");
	}
	else{
		printf("Not a leap year");
	}

}
