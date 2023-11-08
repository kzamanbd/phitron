#include <stdio.h>
#include <string.h>

void recursion(int n, int star, int i)
{
    if (n == i)
    {
        return;
    }
    int s = n - i - 1;
    recursion(n, star + 2, i + 1);
    for (int j = 0; j < s; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < star; j++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{

    int n;
    scanf("%d", &n);
    recursion(n, 1, 0);
    return 0;
}