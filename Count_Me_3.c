#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[10000];
        scanf("%s", str);
        int length = strlen(str);
        int capitalCount = 0, smallCount = 0, digitsCount = 0;

        for (int j = 0; j < length; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                capitalCount++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                smallCount++;
            }
            else
            {
                digitsCount++;
            }
        }
        printf("%d %d %d\n", capitalCount, smallCount, digitsCount);
    }

    return 0;
}