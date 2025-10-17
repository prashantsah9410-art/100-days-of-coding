// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main()
{
    int rows, cols, i, j, k, distinct = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int min = rows < cols ? rows : cols;
    for (i = 0; i < min; i++)
    {
        for (k = i + 1; k < min; k++)
        {
            if (matrix[i][i] == matrix[k][k])
            {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
