#include <stdio.h>

int main()
{

    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);

    double d = (n * k) / a;
    long long ll = d;

    if (d - ll > 0)
    {
        printf("double");
    }
    else if (ll > 2147483647)
    {
        printf("long long");
    }
    else
    {
        printf("int");
    }
    return 0;
}