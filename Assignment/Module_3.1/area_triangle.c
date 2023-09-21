#include<stdio.h>
main()
{
	float base,height;							// tiangle keliye float use hoga
	printf("Enter the base of triangle:");
	scanf("%f",&base);
	printf("Enter the height of triangle:");   // find area of triangle
	scanf("%f",&height);
	printf("The area of triangle %f",(base*height)/2);
	
}
