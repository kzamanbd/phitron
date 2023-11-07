#include <stdio.h>
#include <string.h>

int main()
{

    char str[10000];
    scanf("%s", str);

    int letter[26] = {0};
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        int index = str[i] - 97;
        letter[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letter[i] > 0)
        {
            printf("%c - %d\n", i + 97, letter[i]);
        }
    }
    return 0;
}