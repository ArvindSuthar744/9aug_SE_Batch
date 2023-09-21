#include <stdio.h>
int main()
{
    int n;
    int assci = 64;
    printf("Enter number: ");
    scanf("%d", &n);

    
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            assci++;
            printf("%c ", assci);
        }
        printf("\n");
    }
    

}