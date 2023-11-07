#include <stdio.h>
#include <string.h>

void recursion(int n, int i)
{
    if (n < i)
    {
        return;
    }

    recursion(n, i + 1);
    if (i < n)
    {
        printf(" ");
    }
    printf("%d", i);
}

int main()
{

    int n;
    scanf("%d", &n);
    recursion(n, 1);
    return 0;
}