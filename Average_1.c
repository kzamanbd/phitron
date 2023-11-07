#include <stdio.h>

int main()
{

    double a, b, result = 0.0;
    scanf("%lf\n%lf", &a, &b);

    result = (a + b) / 2.0;

    printf("MEDIA = %lf\n", result);
    return 0;
}