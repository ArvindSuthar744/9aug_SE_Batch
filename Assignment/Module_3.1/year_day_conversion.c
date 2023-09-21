#include <stdio.h>
main()
{
    char opt;
    printf("Enter Y for year to days | Enter D for days to year: ");
    scanf("%ch", &opt);
    int n;
    if (opt == 'Y')
    {
        printf("Enter Year:");
        scanf("%d", &n);
        printf("Days = %d", n * 365);
    }
    else if (opt == 'D')
    {
        printf("Enter Days:");
        scanf("%d", &n);
        printf("Year = %d", n / 365);
    }
    else
    {
        printf("Please enter valid operation (Y or D)");
    }
}