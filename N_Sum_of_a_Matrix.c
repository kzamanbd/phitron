#include <stdio.h>
#include <string.h>

int main()
{

    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int i, j;
    int arr1[rows][cols];
    int arr2[rows][cols];

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
    return 0;
}