#include <stdio.h>

int main()
{

    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}