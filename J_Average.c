#include <stdio.h>
#include <string.h>

float average(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

int main()
{

    int n;
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("%.7f", average(arr, n));
    return 0;
}