#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        int arr1[n], arr2[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[j]);
            arr2[j] = arr1[j];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (arr2[j - 1] > arr2[i])
                {
                    int tmp = arr2[j - 1];
                    arr2[j - 1] = arr2[i];
                    arr2[i] = tmp;
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            int r = abs(arr1[j] - arr2[j]);
            printf("%d ", r);
        }
        printf("\n");
    }
    return 0;
}