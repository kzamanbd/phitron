#include <stdio.h>

int main()
{

    int a, b, c, d;
    long long int result;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    result = a * b * c * d;
    long long int lastTwo = result % 100;
    printf("%lld", lastTwo);

    return 0;
}