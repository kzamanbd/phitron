#include <stdio.h>

int main()
{

    long long a, b, c, d, result;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    result = (a * b * c * d) % 100;
    printf("%lld", result);

    return 0;
}