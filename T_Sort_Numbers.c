#include <stdio.h>

int main()
{

    int a, b, c, min, mid, max;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        max = a;
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }

    if (a < b && a < c)
    {
        min = a;
    }
    else
    {
        if (b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }

    mid = (a + b + c) - max - min;

    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}