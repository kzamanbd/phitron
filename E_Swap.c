#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}