#include <stdio.h>
#include <math.h>

int main()
{

    double a, c, b, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    b = b / 1e12;
    d = d / 1e12;

    printf("%lf %lf\n", pow(a, b), pow(c, d));

    if (pow(a, b) > pow(c, d))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}