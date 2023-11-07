#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int rows = n * 2 - 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            int value = i < j ? i : j;
            value = value < rows - i - 1 ? value : rows - i - 1;
            value = value < rows - j - 1 ? value : rows - j - 1;

            printf("%d", n - value);

            if (j < rows - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}