// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

