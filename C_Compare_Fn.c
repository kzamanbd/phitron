#include <stdio.h>
#include <string.h>

int main()
{

    char x[20], y[20];
    scanf("%s\n%s", &x, &y);

    int comp = strcmp(x, y);

    if (comp > 0)
    {
        printf("%s", y);
    }
    else if (comp < 0)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", x);
    }

    return 0;
}