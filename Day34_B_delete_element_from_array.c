// Delete an element from an array.
#include <stdio.h>

int main()
{
    int n, i, pos;
    printf("Enter the limit of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index position you want to delete: ");
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after Deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
