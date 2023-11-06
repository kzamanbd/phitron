#include <stdio.h>

unsigned long long factorial(unsigned long long x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

int main()
{

    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d\n", &x);

        long long int f = 1;

        f = factorial(x);
        printf("%lld\n", f);
    }
    return 0;
}