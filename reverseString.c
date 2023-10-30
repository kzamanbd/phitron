#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *s, int sSize)
{
    char str = *s;
    printf("%d", sSize);
}

int main()
{
    char s[10];
    scanf("%s", s);
    // char str = &s;
    // reverseString(str, strlen(s));
    printf("%p", &s);
    return 0;
}