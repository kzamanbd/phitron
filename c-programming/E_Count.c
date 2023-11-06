#include <stdio.h>
#include <string.h>
int main()
{

    char s[1000000];
    scanf("%s", &s);

    int length = strlen(s);

    int i = 0, sum = 0;
    while (i < length)
    {
        sum += s[i] - 48;
        i++;
    }

    printf("%d", sum);

    return 0;
}