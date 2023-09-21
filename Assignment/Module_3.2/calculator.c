#include <stdio.h>
int main()
{
    char x;
    int num1, num2;
    printf("Enter operator (+,-,/,*,modulo) : ");
    scanf("%ch", &x);

    printf("Enter num 1: ");
    scanf("%d", &num1);
    printf("Enter num 2: ");
    scanf("%d", &num2);

    switch (x)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
    case '%':
        printf("%d", num1 % num2);
        break;
    default:
        printf("sorry");
    }
    return 0;
}