#include <stdio.h>
#include <string.h>

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    int x = n % 2;
    recursion(n / 2);
    printf("%d", x);
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);
        recursion(x);
        printf("\n");
    }
    return 0;
}