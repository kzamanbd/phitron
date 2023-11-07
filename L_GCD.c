#include <stdio.h>
#include <limits.h>

int main()
{

    int m, n, result = INT_MIN;
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (m / i == n / j)
            {
                int x = ((m / i) + (n / j)) / 2;
                if (result < x)
                {
                    result = x;
                    printf("%d\n", x);
                }
            }
        }
    }
    printf("%d", result);
    return 0;
}