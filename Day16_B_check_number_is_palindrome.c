// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int n, rem, original, reversed = 0;

    printf("Enter the number here: ");
    scanf("%d", &n);
    original == n;

    while (n > 0)
    {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }
    if (original == reversed)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
