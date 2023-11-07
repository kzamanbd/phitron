#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int range = a > b ? a : b;
        int initial = a < b ? a : b;
        int sum = 0;

        for (int j = initial + 1; j < range; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}