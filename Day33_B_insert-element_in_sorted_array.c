// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
{
    int n, i, num;
    printf("Enter the limit of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the sorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want insert: ");
    scanf("%d", &num);

    for (i = n - 1; (i >= 0 && arr[i] > num); i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = num;
    n++;
    printf("Sorted arrray: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
