// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
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

    printf("Diagonal traversal of the matrix:\n");
    for (int d = 0; d < rows + cols - 1; d++)
    {
        int start_row = d < cols ? 0 : d - cols + 1;
        int start_col = d < cols ? d : cols - 1;

        i = start_row;
        j = start_col;

        while (i < rows && j >= 0)
        {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");

    return 0;
}
