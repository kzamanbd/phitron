#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    long long int n;
    scanf("%lld", &n);

    long long int divider = n / 2;
    if (pow(divider * 1.0, 2) == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}