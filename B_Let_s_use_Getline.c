#include <stdio.h>
#include <string.h>

int main()
{

    char s[1000000];
    fgets(s, 1000000, stdin);

    int i = 0;

    while (s[i] != '\\')
    {
        printf("%c", s[i]);
        i++;
    }

    return 0;
}