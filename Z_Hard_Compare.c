#include <stdio.h>
#include <math.h>

int main()
{

    double a, c, b, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if (b * log(a) > d * log(c))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}