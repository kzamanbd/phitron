#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int rows = n * 2 - 1;

    for (int i = rows - 1; i >= 0; i--)
    {

        for (int j = 1; j <= rows; j++)
        {
            int value = n;

            if (j != rows)
            {
                printf("%d ", value);
            }
            else
            {
                printf("%d", value);
            }
        }

        printf("\n");
    }
    return 0;
}