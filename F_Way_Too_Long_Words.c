#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[100];
        scanf("%s\n", &str);
        int length = strlen(str);
        char firstLetter = str[0];
        char lastLetter = str[length - 1];

        if (length > 10)
        {
            char firstLetter = str[0];
            char lastLetter = str[length - 1];
            printf("%c%d%c\n", firstLetter, length - 2, lastLetter);
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}