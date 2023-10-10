// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
// m = eyes, n = mouths, k = bodies

#include <stdio.h>

int main()
{
    long long int m, n, k, min, count = 0;
    scanf("%lld %lld %lld", &m, &n, &k);

    if (m < n && m < k)
    {
        min = m;
    }
    else
    {
        if (n < k)
        {
            min = n;
        }
        else
        {
            min = k;
        }
    }

    m = m - min;
    n = n - min;
    k = k - min;
    count = min;

    while (k != 0 && m > 1)
    {
        count++;
        m = m - 2;
        --k;
    }

    // printf("%lld\n", m / 2);

    // printf("%lld, %lld, %lld\n", m, n, k);

    printf("%lld", count);

    return 0;
}