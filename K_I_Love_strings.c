#include <stdio.h>
#include <string.h>

int main()
{

    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {
        char x[51], y[51];
        scanf("%s %s", x, y);

        int x_length = strlen(x);
        int y_length = strlen(y);

        char str[x_length + y_length + 1];
        int max_length = x_length > y_length ? x_length : y_length;

        int j = 0;
        for (int i = 0; i < max_length; i++)
        {
            if (i < x_length)
            {
                printf("%c", x[i]);
                // str[j++] = x[i];
            }
            if (i < y_length)
            {
                printf("%c", y[i]);
                // str[j++] = y[i];
            }
        }

        printf("\n");
    }
    return 0;
}