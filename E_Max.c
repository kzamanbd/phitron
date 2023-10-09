#include <stdio.h>

int main()
{

    int n, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (max < x || max == 0)
        {
            max = x;
        }
    }
    printf("%d", max);
    return 0;
}