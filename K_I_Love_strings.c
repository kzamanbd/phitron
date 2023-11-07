#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int tt = 0; tt < t; tt++)
    {
        char x[50], y[50];
        scanf("%s %s", x, y);

        int x_length = strlen(x);
        int y_length = strlen(y);

        char str[x_length + y_length + 1];

        if (x_length < y_length)
        {
            for (int i = 0; i < y_length; i++)
            {
            }
        }
    }
    return 0;
}