#include <stdio.h>

int main()
{

    int a1, b1, a2, b2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    if ((a2 > b1 && b2 < a1))
    {
        printf("%d %d", a2, b1);
    }

    else
    {
        printf("-1");
    }

    return 0;
}