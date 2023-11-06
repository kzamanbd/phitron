#include <stdio.h>

int main()
{

    char s;
    scanf("%c", &s);

    if (s == 'z')
    {
        printf("a");
    }
    else
    {
        int ascii = s;
        printf("%c", ascii + 1);
    }
    return 0;
}