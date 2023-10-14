#include <stdio.h>

int main()
{

    double PI = 3.14159, n, A;
    scanf("%lf", &n);

    A = PI * n * n;
    printf("A=%.4lf\n", A);

    return 0;
}