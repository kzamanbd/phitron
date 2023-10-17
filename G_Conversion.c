#include <stdio.h>
#include <string.h>

int main()
{

    char str[100000];
    scanf("%s", &str);
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ',')
        {
            printf(" ");
        }
        else
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                char upper = str[i] - 32;
                printf("%c", upper);
            }
            else
            {
                char lower = str[i] + 32;
                printf("%c", lower);
            }
        }
    }
    return 0;
}