#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char ch1, ch2[100], ch3[100];
    scanf("%c\n%s\n", &ch1, ch2);
    fgets(ch3, 100, stdin);
    printf("%c\n%s\n%s", ch1, ch2, ch3);
    return 0;
}