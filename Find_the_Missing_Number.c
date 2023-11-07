#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int multiply = a * b * c;

        long long int result = m / multiply;

        if (result * multiply == m)
        {

            printf("%lld", result);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}