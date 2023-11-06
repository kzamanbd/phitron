#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000000];
    scanf("%s", &str);
    int length = strlen(str);

    int count[26] = {0};

    for (int i = 0; i < length; i++)
    {
        int index = str[i] - 97;
        count[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 97, count[i]);
        }
    }
    return 0;
}