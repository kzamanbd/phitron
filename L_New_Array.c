#include <stdio.h>
#include <string.h>

void newArray(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[size + i] = arr1[i];
    }
    for (int i = 0; i < size * 2; i++)
    {
        printf("%d", arr2[i]);
        printf(" ");
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    newArray(arr1, arr2, n);

    return 0;
}