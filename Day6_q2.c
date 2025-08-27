// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number to check: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        if (n == 0)
        {
            printf("%d is Zero", n);
        }
        else
        {
            printf("%d is Positive", n);
        }
    }
    else
    {
        printf("%d is Negative", n);
    }

    return 0;
}