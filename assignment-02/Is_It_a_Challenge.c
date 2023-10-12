#include <stdio.h>

int main()
{

    int n, i;
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}