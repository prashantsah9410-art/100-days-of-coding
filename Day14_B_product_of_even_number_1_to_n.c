// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;
    int product = 1;

    printf("Enter the nth term here: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        product *= i;
    }
    printf("The product of %d numbers is: %d", n, product);
    return 0;
}
