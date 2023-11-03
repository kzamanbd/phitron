#include <stdio.h>
#include <string.h>

void recursion(int n)
{
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
        printf("\n");
    }
    return 0;
}