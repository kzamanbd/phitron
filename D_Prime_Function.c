#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prime_number(int x)
{

    int flag = 0;
    if (x == 0 || x == 1)
    {
        flag = 1;
    }

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        prime_number(x);
    }
    return 0;
}