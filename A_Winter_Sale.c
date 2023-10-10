#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    // printf("%f", ((100 - a) * 1.0) / 100);

    printf("%0.2f", b / (((100 - a) * 1.0) / 100));
    return 0;
}