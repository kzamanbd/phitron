#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d", &n);
    m = n;

    for (int i = n; i >= 0; i--)
    {
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        for (int j = 1; j <= m - 1; j++)
        {
            printf(" ");
        }
        m--;

        printf("\n");
    }
    return 0;
}