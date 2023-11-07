#include <stdio.h>
#include <string.h>

int main()
{

    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j;
    int arr[rows][cols];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = cols - 1; j >= 0; j--)
        {
            printf("%d", arr[i][j]);
            if (j > 0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}