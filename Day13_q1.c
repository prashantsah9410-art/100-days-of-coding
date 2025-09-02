// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int a, b, result;
    char operation;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operation you want to do(+,-,*,/,%%): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        result = a + b;
        printf("Sum= %d", result);
        break;
    case '-':
        result = a - b;
        printf("Subtraction= %d", result);
        break;
    case '*':
        result = a * b;
        printf("Multiply= %d", result);
        break;
    case '/':
        if (b == 0)
        {
            printf("Division by 0 is not possible");
        }
        else
        {
            result = a / b;
            printf("Division= %d", result);
        }
        break;
    case '%':
        if (b == 0)
        {
            printf("Division by 0 is not possible");
        }
        else
        {
            result = a % b;
            printf("Modulo= %d", result);
        }
        break;
    default:
        printf("INVALID OPERATOR");
    }
    return 0;
}
