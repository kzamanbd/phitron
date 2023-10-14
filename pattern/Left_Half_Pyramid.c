#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < 2 * (n - i); k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
            if (i != j)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}