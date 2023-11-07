#include <stdio.h>
#include <string.h>

int main()
{

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
    int x;
    scanf("%d", &x);

    int flag = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == x)
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}