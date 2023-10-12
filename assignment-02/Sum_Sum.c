#include <stdio.h>

int main()
{

    int n, i, positive = 0, negative = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            positive += arr[i];
        }
        else
        {
            negative += arr[i];
        }
    }
    printf("%d %d", positive, negative);
    return 0;
}