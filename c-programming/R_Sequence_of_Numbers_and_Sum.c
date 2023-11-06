#include <stdio.h>

int main()
{

    int n = 1;
    while (n != 0)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a > 0 && b > 0)
        {
            int range = a > b ? a : b;
            int initial = a < b ? a : b;
            int sum = 0;

            for (int j = initial; j <= range; j++)
            {
                printf("%d ", j);
                sum += j;
            }

            printf("sum =%d\n", sum);
        }
        else
        {
            break;
        }
    }
    return 0;
}