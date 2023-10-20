#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        int x, isFind = 0;
        scanf("%d", &x);

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == x)
            {
                isFind = 1;
                break;
            }
        }
        if (isFind == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}