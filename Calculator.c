#include <stdio.h>

int main()
{

    int a, b, result;
    char operator;

    scanf("%d%c%d", &a, &operator, & b);

    if (operator== '+')
    {
        result = a + b;
    }
    else if (operator== '-')
    {
        result = a - b;
    }
    else if (operator== '*')
    {
        result = a * b;
    }
    else if (operator== '/')
    {
        result = a / b;
    }

    printf("%d", result);

    return 0;
}