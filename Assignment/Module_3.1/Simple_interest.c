#include<stdio.h>
main()
{
	int principal,rate,time;
	printf("Enter the principal of interest:");		// simple interest formula (p*r*t)/100
	scanf("%d",&principal);
	printf("Enter the rate of interest:");
	scanf("%d",&rate);
	printf("Enter the time of interest:");
	scanf("%d",&time);
	printf("The simple interest of %d",(principal*rate*time)/100);
	
}
