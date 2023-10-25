#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char ch1, ch2[10], *ch3;
    scanf("%s", &ch1);
    scanf("%s", ch2);
    fgets(ch3, 100, stdin);
    printf("%c\n%s\n", ch1, ch2);
    printf("%s", ch3);
    return 0;
}