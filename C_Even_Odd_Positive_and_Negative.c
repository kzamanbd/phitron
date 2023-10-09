#include <stdio.h>

int main()
{
    int n, countEven = 0, countOdd = 0, countPositive = 0, countNegative = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            countEven++;
        }
        if (a % 2 != 0)
        {
            countOdd++;
        }
        if (a >= 1)
        {
            countPositive++;
        }
        if (a < 0)
        {
            countNegative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", countEven, countOdd, countPositive, countNegative);

    return 0;
}