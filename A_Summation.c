#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    long long int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        sum += x;
    }
    printf("%lld", abs(sum));
    return 0;
}