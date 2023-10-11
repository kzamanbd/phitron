#include <stdio.h>

int main()
{

    long long int n;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        long long int j, x, y, sum = 0;
        scanf("%lld %lld", &x, &y);
        sum = sum = (y * (y + 1) - x * (x - 1)) / 2;
        printf("%lld\n", sum);
    }
    return 0;
}