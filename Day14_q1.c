// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter the number here: ");
    scanf("%d", &n);

    for (int i = 1, count = 0; count < n; i = i + 2)
    {
        sum += i;
        count++;
    }
    printf("Sum of first %d number is: %d", n, sum);
    return 0;
}
