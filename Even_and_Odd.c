#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d %d", odd, even);
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    odd_even();
    return 0;
}
