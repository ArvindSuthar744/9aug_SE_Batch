#include<stdio.h>
main()
{
	int arr[5]={15,5,90,91,50};
	int i;
	int max = 0;
	
	for(i=1;i<5;i++)
	{
		if(arr[i]>max)
		{
			max= arr[i];
		}
	}
	printf("Maximum: %d",max);
}

// i>arr[i]
