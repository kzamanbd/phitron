#include <stdio.h>
#include <math.h>

int main()
{

    int x;
    scanf("%d", &x);

    int arr[x][x];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == j)
            {
                primaryDiagonal += arr[i][j];
            }

            if (i + j == x - 1)
            {
                secondaryDiagonal += arr[i][j];
            }
        }
    }

    int result = primaryDiagonal - secondaryDiagonal;
    if (result < 0)
    {
        result = result * (-1);
    }
    printf("%d", result);

    return 0;
}