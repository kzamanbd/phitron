#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" ");
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    displayNumber(n);
    return 0;
}