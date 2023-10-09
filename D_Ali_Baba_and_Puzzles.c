#include <stdio.h>

int main()
{

    int a, b, c, output;
    scanf("%d %d %d %d", &a, &b, &c, &output);

    // operator is (+,−,×)
    // first calculate
    int result1 = a + b - c;
    int result2 = a + b * c;
    int result3 = a - b + c;
    int result4 = a - b * c;
    int result5 = a * b + c;
    int result6 = a * b - c;

    if (result1 == output || result2 == output || result3 == output || result4 == output || result5 == output || result6 == output)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}