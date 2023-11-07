#include <stdio.h>
#include <string.h>

int main()
{

    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j;
    int arr1[rows][cols], arr2[rows][cols], arr3[rows][cols];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}