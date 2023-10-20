#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int divided2 = 0, divided3 = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
        {
            divided2++;
        }
        if (arr[i] % 3 == 0 && arr[i] % 2 != 0)
        {
            divided3++;
        }
    }
    printf("%d %d", divided2, divided3);
    return 0;
}