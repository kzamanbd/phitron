#include <stdio.h>
#include <string.h>

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    int x = n % 10;

    recursion(n / 10);
    printf("%d", x);
    if (n > 0)
    {
        printf(" ");
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        recursion(x);
        if (x == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}