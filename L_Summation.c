#include <stdio.h>
#include <string.h>

long long int recursion(int arr[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }

    long long int sum = recursion(arr, n, i + 1);
    return sum + arr[i];
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
    long long int result = recursion(arr, n, 0);
    printf("%lld", result);
    return 0;
}