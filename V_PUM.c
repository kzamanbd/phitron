#include <stdio.h>

int main()
{

    int n, pmu = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", pmu++);
        }
        pmu++;
        printf("PUM\n");
    }

    return 0;
}