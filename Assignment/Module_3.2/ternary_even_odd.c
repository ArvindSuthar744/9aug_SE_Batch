#include <stdio.h>
main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    int rs = a%2==0?0:1;
    if(rs==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    
   
}