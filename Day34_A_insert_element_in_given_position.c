// Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int n, i, num, pos;
    printf("Enter the limit of array: ");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Enter the element of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index position you want to insert number: ");
    scanf("%d", &pos);

    printf("Enter the number you want to insert: ");
    scanf("%d", &num);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = num;
    n++;

    printf("New araay: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
