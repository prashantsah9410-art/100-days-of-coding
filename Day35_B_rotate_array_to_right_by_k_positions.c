// Rotate an array to the right by k positions.
#include <stdio.h>

int main()
{
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    k = k % n;
    int rotated[n];
    for (i = 0; i < k; i++)
    {
        rotated[i] = arr[n - k + i];
    }
    for (i = k; i < n; i++)
    {
        rotated[i] = arr[i - k];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotated[i]);
    }
    return 0;
}
