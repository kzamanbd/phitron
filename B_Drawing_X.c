#include <stdio.h>

int main()
{

    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}