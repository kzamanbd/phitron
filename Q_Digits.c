#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        do
        {
            printf("%d ", x % 10);
            x /= 10;
        } while (x != 0);

        printf("\n");
    }
    return 0;
}