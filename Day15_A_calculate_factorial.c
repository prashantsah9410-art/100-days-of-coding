// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main()
{

    int n;
    int factorial = 1;
    printf("Enter the number for factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is: %d", n, factorial);

    return 0;
}
