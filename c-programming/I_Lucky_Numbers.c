#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int firstNum = n / 10;
    int lastNum = n % 10;

    if (((lastNum % firstNum == 0 || firstNum % lastNum == 0) && lastNum != 0) || n % 10 == 0)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}