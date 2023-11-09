#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int countPositive = 0, countNegative = 0, countZero = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            countNegative++;
        }
        else if (arr[i] > 0)
        {
            countPositive++;
        }
        else if (arr[i] == 0)
        {
            countZero++;
        }
    }

    float positive = countPositive * 1.0 / n;
    float negative = countNegative * 1.0 / n;
    float zero = countZero * 1.0 / n;

    printf("%f\n%f\n%f", positive, negative, zero);

    return 0;
}