#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, d, result = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    result = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    if (result % 100 <= 9)
    {
        printf("0%d", result % 100);
    }
    else
    {
        printf("%d", result % 100);
    }

    return 0;
}