#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int m = n;
    int x = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        m--;

        printf("\n");
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}