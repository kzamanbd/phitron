#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int min(int arr[], int n)
{
    int v = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v > arr[i])
        {
            v = arr[i];
        }
    }
    return v;
}

int max(int arr[], int n)
{
    int v = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v < arr[i])
        {
            v = arr[i];
        }
    }
    return v;
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
    int minV = min(arr, n);
    int maxV = max(arr, n);
    printf("%d %d", minV, maxV);
    return 0;
}