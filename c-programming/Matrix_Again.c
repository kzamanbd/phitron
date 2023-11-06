#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //
    int lastRow = rows - 1;

    for (int j = 0; j < cols; j++)
    {
        printf("%d ", arr[lastRow][j]);
    }

    printf("\n");
    int lastCols = cols - 1;
    for (int j = 0; j < rows; j++)
    {
        printf("%d ", arr[j][lastCols]);
    }

    return 0;
}
