#include <stdio.h>
#include <limits.h>

int main()
{

    int n, min = INT_MAX, position;
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

        if (min > arr[i])
        {
            min = arr[i];
            position = i + 1;
        }
    }

    printf("%d %d", min, position);

    return 0;
}