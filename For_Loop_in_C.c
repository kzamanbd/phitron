#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.

    char string[9][5] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i < 9; i++)
    {
        printf("%s\n", string[i - 1]);
    }

    return 0;
}
