#include <stdio.h>

int main()
{

    int n, k = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i, k = 0)
    {
        for (int space = 1; space <= n - i; ++space)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
    return 0;
}