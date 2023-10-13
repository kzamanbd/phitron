#include <stdio.h>
#include <math.h>

int main()
{

    long long a, b, c, d, result;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    result = (a * b * c * d);

    if (isinf(result))
    {
        printf("00");
    }
    else
    {

        printf("%lld", result % 100);
    }

    return 0;
}