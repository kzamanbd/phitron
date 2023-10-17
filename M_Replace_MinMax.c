#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX, minIndex, max = INT_MIN, maxIndex;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    arr[minIndex] = max;
    arr[maxIndex] = min;

    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}