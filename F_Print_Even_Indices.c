#include <stdio.h>
#include <string.h>

void recursion(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    recursion(arr, n, i + 1);

    if (i % 2 == 0)
    {
        printf("%d", arr[i]);
        if (i < n)
        {
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    recursion(arr, n, 0);
    return 0;
}