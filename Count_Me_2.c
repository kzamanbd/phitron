#include <stdio.h>
#include <string.h>

int main()
{

    char str[100001];
    scanf("%s", &str);
    int length = strlen(str);
    int count = 0;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[i] == vowels[j])
            {
                count++;
            }
        }
    }

    printf("%d", length - count);

    return 0;
}