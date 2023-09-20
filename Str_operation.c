#include <stdio.h>
#include <string.h>

main()
{

    int flag = 1;
    while (flag == 1)
    {
        int num1;
        char str1[20] = "";
        char str2[20] = "";
        printf("Main Menu");
        printf("\n        1.Equality");
        printf("\n        2.String Copy");
        printf("\n        3.Concat");
        printf("\n        4.Show");
        printf("\n        5.Reverse");
        printf("\n        6.Palindrome");
        printf("\n        7.Sub String");
        printf("\n        8.Exit");
        printf("\nPlease Enter your choice: ");
        scanf("%d", &num1);

        switch (num1)
        {
        case 1:
            printf("\nPlease Enter String: ");
            scanf("%s", &str1);
            printf("Enter str2 for comparision with str1: ");
            scanf("%s", &str2);

            // strcmp(str1, str2) == 1 ? printf("Equal") : printf("Not equal");
            if (strcmp(str1, str2) == 0)
            {
                printf("Both are equal");
            }
            else
            {
                printf("Not equal");
            }
            break;

        case 2:
            printf("\nPlease Enter String: ");
            scanf("%s", &str1);
            strcpy(str2, str1);
            printf("\n -- The copied string is: %s", str2);
            break;

        case 3:
            printf("\nPlease Enter String: ");
            scanf("%s", &str1);
            printf("Enter str2 : ");
            scanf("%s", &str2);
            printf("Concated string: %s", strcat(str1, str2));
            break;

        case 4:
            printf("\nPlease Enter String: ");
            scanf("%s", &str1);
            printf("\n -- The String you entered is: %s", str1);
            break;

        case 5:
            printf("\nPlease Enter String: ");
            scanf("%s", &str1);
            printf("\n -- The String after reversing is: %s", strrev(str1));
            break;

        case 6:
            printf("\nPlease Enter String: ");
            scanf("%s", &str1);
            strcpy(str2, str1);
            strrev(str2);
            !strcmp(str1, str2) ? printf("Palidrome") : printf("Not palidrome");
            break;

        case 7:
            printf("\nPlease Enter String: ");
            scanf("%s", &str1);
            printf("Enter substring : ");
            scanf("%s", &str2);
            printf("%s", strstr(str1, str2));
            break;

        case 8:
            flag = 0;

        default:

            break;
        }
        flag = 0;
        printf("\nDo you want to continue<Press 1 to continur>");
        scanf("%d", &flag);
        if (flag == 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }
}