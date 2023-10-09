#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{

    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        int x, f = 1;
        scanf("%d\n", &x);

        f = factorial(x);
        printf("%d\n", f);
    }
    return 0;
}