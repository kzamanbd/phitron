#include <stdio.h>
#include <math.h>

int main()
{

    int a, c;
    long long int b, d, m, n;
    scanf("%d %lld %d %lld", &a, &b, &c, &d);

    m = pow(a, b);
    n = pow(c, d);

    if (m > n && m != n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}