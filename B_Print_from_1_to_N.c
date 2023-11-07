#include <stdio.h>
#include <string.h>

void recursion(int n, int i)
{
    if (n < i)
    {
        return;
    }
    printf("%d\n", i);
    recursion(n, i + 1);
}

int main()
{

    int n;
    scanf("%d", &n);
    recursion(n, 1);
    return 0;
}