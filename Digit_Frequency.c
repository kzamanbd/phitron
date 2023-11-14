#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str[1000];
    scanf("%s", &str);
    int length = strlen(str);
    int count[10] = {0};

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int index = str[i] - 48;
            count[index]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }

    return 0;
}