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

    for (int i = 0; i < n; i++)
    {
        s = arr[i] > 0 ? 1 : arr[i] == 0 ? 0
                                         : 2;
        printf("%d ", s);
    }

    return 0;
}