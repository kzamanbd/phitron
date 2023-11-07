#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int space = n - 1;
    int character = 1;

    for (int i = 0; i <= n * 2; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < character; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        if (i >= n - 1)
        {
            space++;
            character -= 2;
        }
        else
        {
            space--;
            character += 2;
        }

        printf("\n");
    }
    return 0;
}