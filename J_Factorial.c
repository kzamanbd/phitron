#include <stdio.h>
#include <string.h>

long long int recursion(long long int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * recursion(n - 1);
}

int main()
{

    long long int n;
    scanf("%lld", &n);
    long long int result = recursion(n);
    printf("%lld", result);
    return 0;
}