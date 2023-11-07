#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int s = sum(a, b);
    printf("%d", s);
    return 0;
}