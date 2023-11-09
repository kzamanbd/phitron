#include <stdio.h>
#include <string.h>

long long int recursion(long long int arr[], int size, int i)
{
    if (i == size)
    {
        return 0;
    }

    return arr[i] + recursion(arr, size, i + 1);
}

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = recursion(arr, n, n - m);
    printf("%lld", sum);

    return 0;
}