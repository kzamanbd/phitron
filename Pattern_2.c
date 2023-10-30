#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        space--;
        printf("\n");
    }
    return 0;
}