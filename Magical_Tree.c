#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    int star_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            star_count++;
        }
    }
    star_count += 5;
    // printf("%d", star_count);

    int space = star_count - 1;

    for (int i = 0; i < star_count; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i * 2; j++)
        {
            printf("*");
        }

        space--;

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}