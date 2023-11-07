#include <stdio.h>

int main()
{

    int n, s;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }

    scanf("%d", &s);

    for (int i = 0; i < n; i++)
    {
        if (s == arr[i])
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}