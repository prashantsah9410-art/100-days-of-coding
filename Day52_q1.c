/*
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or
equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil
of x, return the index of the first occurrence.

*/

#include <stdio.h>

int main()
{
    int i, n, x, ceilIndex = -1;
    printf("Enter the limit of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted element of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element of which you want to find ceil: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ceilIndex = i;
            break;
        }
    }
    if (ceilIndex == -1)
    {
        printf("No ceil exist for %d", x);
    }
    else
    {
        printf("Smallest number greater than or equal to %d is %d Whose index is %d", x, arr[ceilIndex], ceilIndex);
    }
    return 0;
}
