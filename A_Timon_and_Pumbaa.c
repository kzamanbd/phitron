#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    int result = a - b;
    if (result >= 0)
    {
        printf("%d", result);
    }
    else
    {
        printf("0");
    }
    return 0;
}