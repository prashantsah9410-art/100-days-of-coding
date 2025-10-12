// Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the limiot of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest, second_largest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    printf("Second largest number is %d", second_largest);
    return 0;
}
