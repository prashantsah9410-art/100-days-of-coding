// Search in a sorted array using binary search.
#include <stdio.h>

int main()
{
    int n, i, num, found = 0;
    printf("Enter the limit of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
    if (found != 1)
    {
        printf("Element not found in the array");
    }
    return 0;
}
