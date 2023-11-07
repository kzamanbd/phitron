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

    int flag = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = 0;
            }

            if (i + j == rows - 1 && arr[i][j] != 1)
            {
                flag = 0;
            }

            if (i != j && i + j != rows - 1)
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }
    if (rows != cols)
    {
        flag = 0;
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
