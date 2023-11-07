#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printNumber(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x;
        char c;
        scanf("%d %c", &x, &c);

        for (int j = 0; j < x; j++)
        {
            printf("%c", c);
            if (j < x)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{

    int t;
    scanf("%d", &t);
    printNumber(t);
    return 0;
}