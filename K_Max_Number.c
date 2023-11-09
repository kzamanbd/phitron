#include <stdio.h>
#include <string.h>
#include <limits.h>

int recursion(int arr[], int size, int i, int max)
{
    if (i == size)
    {
        return max;
    }

    int nextMax = max;
    if (max < arr[i])
    {
        nextMax = arr[i];
    }

    return recursion(arr, size, i + 1, nextMax);
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
    int max = recursion(arr, n, 0, INT_MIN);
    printf("%d", max);

    return 0;
}